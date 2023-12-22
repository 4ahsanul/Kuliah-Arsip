import numpy as np
from pycuda import driver, compiler, gpuarray, tools
import time
start_time=0.0

import pycuda.autoinit


def startTimer():
    global start_time    
    start_time = time.time()
        
def stopTimer():
    elapsed_time = time.time() - start_time    
    print('DONE in {0:.8f} seconds.'.format(elapsed_time))


kernel_code_template = """
	__global__ void MatrixMulKernel(float *a, float *b, float *c)
	{
		int tx = threadIdx.x;
		int ty = threadIdx.y;
		float Pvalue = 0;
		for (int k = 0; k < %(MATRIX_SIZE)s; ++k) {
		float Aelement = a[ty * %(MATRIX_SIZE)s + k];
		float Belement = b[k * %(MATRIX_SIZE)s + tx];
		Pvalue += Aelement * Belement;
		}
		c[ty * %(MATRIX_SIZE)s + tx] = Pvalue;
	}
"""
MATRIX_SIZE = 32
a_cpu = np.random.randn(MATRIX_SIZE, MATRIX_SIZE).astype(np.float32)
b_cpu = np.random.randn(MATRIX_SIZE, MATRIX_SIZE).astype(np.float32)
c_cpu = np.dot(a_cpu, b_cpu)
a_gpu = gpuarray.to_gpu(a_cpu)
b_gpu = gpuarray.to_gpu(b_cpu)
c_gpu = gpuarray.empty((MATRIX_SIZE, MATRIX_SIZE), np.float32)


kernel_code = kernel_code_template % {
	'MATRIX_SIZE': MATRIX_SIZE
}

mod = compiler.SourceModule(kernel_code)
matrixmul = mod.get_function("MatrixMulKernel")

startTimer()
matrixmul(
	a_gpu, b_gpu,
	c_gpu,
	block = (MATRIX_SIZE, MATRIX_SIZE, 1),
)

# print the results
print("-" * 100)
print("Matrix A (GPU):")
print(a_gpu.get())
print("-" * 100)
print("Matrix B (GPU):")
print(b_gpu.get())
print("-" * 100)
print("Matrix C (GPU):")
print(c_gpu.get())
stopTimer()