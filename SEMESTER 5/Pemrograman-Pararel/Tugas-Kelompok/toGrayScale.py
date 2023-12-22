import sys
import time
import PIL
import matplotlib.pyplot as plot   # Library to plot
from PIL import Image as PILImage
from matplotlib.pyplot import imshow

import pycuda.driver as cuda
import pycuda.autoinit
from pycuda.compiler import SourceModule

import numpy

# Kernel text
mod = SourceModule("""
 
    __global__ void bw( float *inIm, int check){
 
        int idx = (threadIdx.x) + blockDim.x * blockIdx.x ;

        int val = 0.21 *inIm[idx*3] + 0.71*inIm[idx*3+1] + 0.07 * inIm[idx*3+2]; 

        inIm[idx*3]= val;
        inIm[idx*3+1]= val;
        inIm[idx*3+2]= val;

    }
    """
                   )

# Compile and get kernel function
func = mod.get_function("bw")


def filterImageOnGPU(inPath, filterFunc):
    im = PILImage.open(inPath)
    px = numpy.array(im).astype(numpy.float32)

    d_px = cuda.mem_alloc(px.nbytes)
    cuda.memcpy_htod(d_px, px)

    BLOCK_SIZE = 1024
    block = (BLOCK_SIZE, 1, 1)
    print('Block:' + str(block))
    totalPixels = numpy.int32(im.size[0]*im.size[1])
    print('TotalPixels:' + str(totalPixels))
    gridRounded = int(im.size[0]*im.size[1]/BLOCK_SIZE)+1
    print('GridRounded:' + str(gridRounded))
    print('BLOCK_SIZE * GridRounded:' + str(gridRounded*BLOCK_SIZE))
    grid = (gridRounded, 1, 1)
    print('Grid:' + str(grid))

    filterFunc(d_px, totalPixels, block=block, grid=grid)

    bwPx = numpy.empty_like(px)
    cuda.memcpy_dtoh(bwPx, d_px)
    # On monochrome images, Pixels are uint8 [0,255].
#     numpy.clip(bwPx, 0, 255, out=bwPx)
#     bwPx = bwPx.astype('uint8')
    bwPx = (numpy.uint8(bwPx))
    pil_im = PILImage.fromarray(bwPx, mode="RGB")
    pil_im.save("gambar_baru.png")
    return pil_im


start_time = 0.0


def startTimer(funcname):
    global start_time
    print(funcname)
    start_time = time.time()


def stopTimer():
    elapsed_time = time.time() - start_time
    print('DONE in {0:.8f} seconds.'.format(elapsed_time))


startTimer('filterImageOnGPU')
figure = plot.figure()
figure.set_size_inches(20, 20)
imshow(filterImageOnGPU('indomilk.jpg', func))
stopTimer()

# import timeit
# n_iter = ARR_SIZE
# rounds = 1000  # for timeit

# print 'numpy', timeit.timeit(lambda:
#                               expit(a),
#                               number=rounds)

# print 'pycuda', timeit.timeit(lambda:
#                               sigmoidGPU(),
#                               number=rounds)
