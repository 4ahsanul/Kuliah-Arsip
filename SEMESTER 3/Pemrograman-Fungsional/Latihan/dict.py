import itertools
import operator #gak keapke
#Data Daerah
data_daerah = ['Banjarnegara','Banyumas','Batang','Blora','Boyolali','Brebes','Cilacap','Demak','Grobogan','Jepara','Karanganyar','Kebumen','Kendal','Klaten','Kota Pekalongan','Kota Semarang','Kota Surakarta','Kota Tegal','Kudus','Magelang','Pati','Pekalongan','Pemalang','Purbalingga','Purworejo','Rembang','Semarang','Sragen','Sukoharjo','Tegal','Temanggung','Wonogiri','Wonosobo']

#Data Jumlah Kejadian
data_kejadian = [40,44,4,17,11,43,37,18,55,43,22,11,36,20,2,173,9,14,25,71,54,18,4,24,19,3,7,66,11,35,101,43,12]

#Data Jumlah Korban
data_korban = [3,0,0,0,1,0,4,1,3,8,1,523,34,16,0,31,111,3,84,21,1,0,0,5,32,0,0,5,111,10,15,3,2]

#Data Jumlah Kerugian
data_kerugian = [1007000,994500,0,69500,73000,830000,332600,1162000,2235500,6146000,347397,180500,0,1509595,5000,1363000,500,310000,781000,79000,2178000,555000,60000,335500,26500,1000,100000,2936022,68000,204000,2186150,501200,65000]

#Data Lemgkap
data_lengkap = [('Banjarnegara',40,1007000),('Banyumas',44,994500),
('Batang',4,0),('Blora' ,17,69500),('Boyolali',11,73000),
('Brebes',43,830000),('Cilacap ',37,332600),('Demak',18,1162000),
('Grobogan',55,2235500),('Jepara',43,6146000),
('Karanganyar',22,347397),('Kebumen',11,180500),('Kendal',36,0),
('Klaten',20,1509595),('Kota Pekalongan',2,5000),
('Kota Semarang',173,1363000),('Kota Surakarta',9,500,111),
('Kota Tegal',14,310000),('Kudus','25','781000'),('Magelang',71,79000),
('Pati',54,2178000),('Pekalongan',18,555000),('Pemalang',4,60000),
('Purbalingga',24,335500),('Purworejo',19,26500),('Rembang',3,1000),
('Semarang',7,100000),('Sragen',66,2936022),('Sukoharjo',11,68000),
('Tegal',35,204000),('Temanggung',101,2186150),('Wonogiri',43,501200),
('Wonosobo',12,65000)]

hitung_0 = data_korban.count(0)
hitung_1 = data_korban.count(1)
hitung_2 = data_korban.count(2)
hitung_3 = data_korban.count(3)
hitung_4 = data_korban.count(4)
hitung_5 = data_korban.count(5)
hitung_8 = data_korban.count(8)
hitung_10 = data_korban.count(10)
hitung_15 = data_korban.count(15)
hitung_16 = data_korban.count(16)
hitung_21 = data_korban.count(21)
hitung_31 = data_korban.count(31)
hitung_32 = data_korban.count(32)
hitung_34 = data_korban.count(34)
hitung_84 = data_korban.count(84)
hitung_111 = data_korban.count(111)
hitung_523 = data_korban.count(523)

"""
print("Kejadian dengan 0 Korban ada :", hitung_0)
print("Kejadian dengan 1 Korban ada :", hitung_1)
print("Kejadian dengan 2 Korban ada :", hitung_2)
print("Kejadian dengan 3 Korban ada :", hitung_3)
print("Kejadian dengan 4 Korban ada :", hitung_4)
print("Kejadian dengan 5 Korban ada :", hitung_5)
print("Kejadian dengan 8 Korban ada :", hitung_8)
print("Kejadian dengan 10 Korban ada :", hitung_10)
print("Kejadian dengan 15 Korban ada :", hitung_15)
print("Kejadian dengan 16 Korban ada :", hitung_16)
print("Kejadian dengan 21 Korban ada :", hitung_21)
print("Kejadian dengan 31 Korban ada :", hitung_31)
print("Kejadian dengan 32 Korban ada :", hitung_32)
print("Kejadian dengan 34 Korban ada :", hitung_34)
print("Kejadian dengan 84 Korban ada :", hitung_84)
print("Kejadian dengan 111 Korban ada :", hitung_111)
print("Kejadian dengan 523 Korban ada :", hitung_523)
"""

#print(sorted(set([i for i in data_korban if data_korban.count(i)>-2])))

for iteration, item in enumerate(data_lengkap):
  print(iteration)

print([i for i in itertools.repeat('Masukkan salah',3)]) #buat alert kalo input salah

print('ini repeat')
print([i for i in itertools.repeat(data_daerah,1)])