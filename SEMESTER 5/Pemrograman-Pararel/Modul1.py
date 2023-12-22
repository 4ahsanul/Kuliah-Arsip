#import library threading yang akan digunakan
import threading

#deklarasi fungsi dengan nama showMessage
def showMessage(i):
    #menampilkan message
    print("Fungsi dipanggil oleh Thread %i\n" %i)
    #return null untuk mengakhiri fungsi
    return

#membuat variable array dengan nama threads
threads = []

#lakukan looping dengan for dari 0-4
for i in range(5):
    #inisialisasi thread ditampung di variable t dengan parameter input i
    #tanda koma harus disertakan dan diperhatikan
    t = threading.Thread(target=showMessage, args=(i,))