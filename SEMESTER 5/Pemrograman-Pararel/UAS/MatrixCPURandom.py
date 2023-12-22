import numpy as np
import time
start_time = 0.0


def startTimer():
    global start_time
    start_time = time.time()


def stopTimer():
    elapsed_time = time.time() - start_time
    print('DONE in {0:.8f} seconds.'.format(elapsed_time))


a = np.random.randn(32, 32).astype(np.float32)
b = np.random.randn(32, 32).astype(np.float32)

startTimer()
result = np.dot(a, b)

for r in result:
    print(r)

stopTimer()
