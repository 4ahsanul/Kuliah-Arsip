import threading

# global variable x
x = 0


def increment():
    """
    fungsi untuk increment global variable x
    """
    global x
    x += 1


def thread_task():
    """
    task untuk thrad
    memanggil fungsi increment sebanyak 100000 kali
    """
    for _ in range(100000):
        increment()


def main_task():
    # setting untuk global variabel x sebgaoi 0
    x = 0

    # membuat thrads
    t1 = threading.Thread(target=thread_task)
    t2 = threading.Thread(target=thread_task)
    t3 = threading.Thread(target=thread_task)
    t4 = threading.Thread(target=thread_task)

    # memulai threads
    t1.start()
    t2.start()
    t3.start()
    t4.start()

    # menunggu sampai thread selesai melakukan proses
    t1.join
    t2.join
    t3.join
    t4.join


if __name__ == "__main__":
    for i in range(10):
        main_task()
        print("Iterasi {0}: x = {1}".format(i, x))
