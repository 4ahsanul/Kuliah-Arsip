#FILFIMO YULFIZ AHSANUL HULQI
#191012143

#Import library MPI dari mpi4py yang sudah diinstall sebelumnya
from mpi4py import MPI

comm = MPI.COMM_WORLD
size = comm.Get_size()
rank = comm.Get_rank()

data = (rank+1)**2
data = comm.gather(data, root=0)

#Lakukan perkondisian dari nilai Rank
if rank == 0:
    #Lakukan perulangan
    for i in range(size):
        assert data[i] == (i+1)**2
else:
    assert data is None

print("Rank : %d" %rank + " data : %s" %data)
