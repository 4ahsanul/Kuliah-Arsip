#FILFIMO YULFIZ AHSANUL HULQI
#191012143

#Import library MPI dari mpi4py yang sudah diinstall sebelumnya
from mpi4py import MPI
comm = MPI.COMM_WORLD
rank = comm.Get_rank()
size = comm.Get_size()
print ("Rank is : %s" %rank + " and size is %s" %size)
