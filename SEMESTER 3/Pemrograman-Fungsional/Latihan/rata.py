import functools

data_kerugian = [1000,2000,3000]

def sm_rerata(func):
    def inner(a):
        x = sum(data_kerugian)
        y = len(data_kerugian)
        print("Menghitung rata-rata",x, "dibagi dengan", y)
    return inner

@sm_rerata
def rataan(x, y):
    print(sum(data_kerugian) / len(data_kerugian))

rataan(data_kerugian)



#hasil = float('%.2f' % float(sum(data_kerugian) / len(data_kerugian))) 
#print(hasil)