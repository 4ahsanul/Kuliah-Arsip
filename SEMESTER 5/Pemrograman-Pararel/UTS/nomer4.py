from mpi4py import MPI
comm = MPI.COMM_WORLD
rank = comm.Get_rank()

data = (rank+1)**2
data = comm.gather(data, root=0)
if rank == 0:
    pangkat = [n**2 for n in range(1, 20)]
    jumlah = sum(pangkat)

print(jumlah)
