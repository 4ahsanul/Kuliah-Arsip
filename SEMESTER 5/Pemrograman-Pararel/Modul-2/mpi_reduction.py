#FILFIMO YULFIZ AHSANUL HULQI
#191012143

#Import library numpy
import numpy
import numpy as np

#Import library MPI dari mpi4py yang sudah diinstall sebelumnya
from mpi4py import MPI

comm = MPI.COMM_WORLD
size = comm.Get_size()
rank = comm.Get_rank()
array_size = 3
recvdata = numpy.zeros(array_size, dtype = int)
senddata = (rank+1)*numpy.arange(array_size, dtype = int)
print ("Process %s sending %s " %(rank, senddata))
comm.Reduce(senddata,recvdata,root=0,op=MPI.SUM)
print('On task', rank, 'after Reduce: data = ', recvdata)
