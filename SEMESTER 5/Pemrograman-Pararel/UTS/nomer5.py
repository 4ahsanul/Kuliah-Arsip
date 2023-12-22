import os
import sys
from PIL import Image


def duplicateMe(file, i):
    # getcwd() = get current work directory
    picture = Image.open(file)
    dim = os.stat(file).st_size
    # ye.jpg disini adalah gambar yang ingin diduplikasi bisa diganti dengan gambar lain
    picture.save(str(i+1)+"ye.jpg", "JPEG", optimize=True, quality=100)


def utama():
    verrbose = False
    if(len(sys.argv) > 1):
        if(sys.argv[1].lower() == "-v"):
            verbose = True

    pwd = os.getcwd()

    for i in range(10):
        # str 0, ganti menggunakan nama file gambar tanpa ekstensi
        file = str('ye')+".jpg"
        duplicateMe(file, i)


if __name__ == "__main__":
    utama()
