#FILFIMO YULFIZ AHSANUL HULQI
#19102143

import warnings
warnings.filterwarnings("ignore", category=DeprecationWarning)

#import library threading yang akan digunakan
import threading
import time

#mendeklasikan fungsi dengan nama fungsiPertama
def fungsiPertama():
    #menampilkan nama thread
    print(threading.current_thread().getName() + str(' mulai \n'))
    time.sleep(2)
    print(threading.current_thread().getName() + str(' berhenti \n'))
    return

#mendeklasikan fungsi dengan nama fungsiKedua
def fungsiKedua():
    #menampilkan nama thread
    print(threading.current_thread().getName() + str(' mulai \n'))
    time.sleep(2)
    print(threading.current_thread().getName() + str(' berhenti \n'))
    return

#mendeklasikan fungsi dengan nama fungsiKetiga
def fungsiKetiga():
    #menampilkan nama thread
    print(threading.current_thread().getName() + str(' mulai \n'))
    time.sleep(2)
    print(threading.current_thread().getName() + str(' berhenti \n'))
    return

#buat sebuah perkondisiian nama
if __name__ == "__main__":
    #inisialisasi dan new Thread dengan memberikan nama
    t1 = threading.Thread(name='fungsiPertama',target=fungsiPertama)
    t2 = threading.Thread(name='fungsiKedua',target=fungsiKedua)
    t3 = threading.Thread(name='fungsiKetiga',target=fungsiKetiga)

    #thread dimulai
    t1.start();
    t2.start();
    t3.start();
