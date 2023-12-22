#FILFIMO YULFIZ AHSANUL HULQI
#191012143

#Import library MPI dari mpi4py yang sudah diinstall sebelumnya
from mpi4py import MPI

comm = MPI.COMM_WORLD
size = comm.Get_size()
rank = comm.Get_rank()

#Lakukan perkondisian dari nilai Rank
if rank == 0:
    data = [(i+1)**2 for i in range(size)]
else:
    data = None
data = comm.scatter(data,root=0)

#Lakukan penegasan
assert data == (rank+1)**2
print("Rank : %d" %rank + " data : %d" %data)
