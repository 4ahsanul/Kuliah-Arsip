import PIL
import os
import glob
from PIL import Image

# masukan nama file untuk hasil kompres
file_name = 'ye-compress.jpg'
# open gambar yang akan dilakukan kompres
picture = Image.open('ye.jpg')
dim = picture.size
print(dim)

# lakukan penyimpan pada gambar hasil kompresi, untuk kualitas gambar
# dapat diatur dari 0-100
picture.save("Compressed 0 " + file_name, optimize=True, quality=0)
