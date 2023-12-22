#FILFIMO YULFIZ AHSANUL HULQI
#19102143

#Import library MPI dari mpi4py yang sudah diinstall sebelumnya
from mpi4py import MPI
comm = MPI.COMM_WORLD
rank = comm.Get_rank()

#Lakukan perkondisian dari nilai Rank
if rank == 0:
    variable_to_share = 100
else:
    variable_to_share = None

variable_to_share = comm.bcast(variable_to_share, root=0)
#Shared variab;le adalah Variable yang dibagikan pada thread
print("Process = %d" %rank + " variable shared = %d " %variable_to_share)
