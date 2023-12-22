from PIL import Image
from numpy import asarray

import time
import sys
start_time = 0.0


def startTimer():
    global start_time
    start_time = time.time()


def stopTimer():
    elapsed_time = time.time() - start_time
    print('DONE in {0:.8f} seconds.'.format(elapsed_time))


# sample.png is the name of the image
# file and assuming that it is uploaded
# in the current directory or we need
# to give the path
image = Image.open('coba.jpg')

# summarize some details about the image
# print(image.format)
# print(image.size)
# print(image.mode)

startTimer()

numpydata = asarray(image)
height, width, rgb = numpydata.shape

for i in range(0, height):
    for j in range(0, width):
        red, green, blue = numpydata[i][j]
        rgb_new = int((red+green+blue)/3)
        numpydata[i, j] = [rgb_new, rgb_new, rgb_new]

# ubah disini rangenya
for h in range(0, 5):
    image_new = Image.fromarray(numpydata)
    image_new.save(str(h+1)+"image_new.png")

stopTimer()
