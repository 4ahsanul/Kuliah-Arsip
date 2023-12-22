#FILFIMO YULFIZ AHSANUL HULQI
#19102143

#import library threading yang akan digunakan
import threading
import time

#lock threading
lock = threading.Lock()

#deklarasikan nilai x
x=0

#mendeklarasikan fungsi dengan nama increment
def increment():
    global x
    #melakukan looping untuk i dengan range 200000
    for i in range(200000):
        #range akan naik
        x+=1

#deklarasikan fungsi dengan nama main
def main():
    #inisialisasikan thread yanng akan digunakan dengan targetnya increment
    t1 = threading.Thread(target=increment)
    t2 = threading.Thread(target=increment)
    t3 = threading.Thread(target=increment)
    t4 = threading.Thread(target=increment)

    #thread dimulai
    t1.start()
    t2.start()
    t3.start()
    t4.start()

    #thread akan berjalan secara sequential
    t1.join()
    t2.join()
    t3.join()
    t4.join()

#buat sebuah perkondisian nama
if __name__ == "__main__":

    #lakukan looping untuk nilai yang akan ditampilkan pada thread
    for j in range(5):
        main()
        print("Nilai x = %s" %x)
    

    
