#Data Bencana
data = [('Banjarnegara',40,1007000,3),
('Banyumas',44,994500,0),
('Batang',4,0,0),
('Blora' ,17,69500,0),
('Boyolali',11,73000,1),
('Brebes',43,830000,0),
('Cilacap ',37,332600,4),
('Demak',18,1162000,1),
('Grobogan',55,2235500,3),
('Jepara',43,6146000,8),
('Karanganyar',22,347397,1),
('Kebumen',11,180500,523),
('Kendal',36,0,34),
('Klaten',20,1509595,16),
('Kota Pekalongan',2,5000,0),
('Kota Semarang',173,1363000,31),
('Kota Surakarta',9,500,111),
('Kota Tegal',14,310000,3),
('Kudus',25,781000,84),
('Magelang',71,79000,21),
('Pati',54,2178000,1),
('Pekalongan',18,555000,0),
('Pemalang',4,60000,0),
('Purbalingga',24,335500,5),
('Purworejo',19,26500,32),
('Rembang',3,1000,0),
('Semarang',7,100000,0),
('Sragen',66,2936022,5),
('Sukoharjo',11,68000,111),
('Tegal',35,204000,10),
('Temanggung',101,2186150,15),
('Wonogiri',43,501200,3),
('Wonosobo',12,65000,2)]

#Data Kerugian
data_kerugian = [1007000,994500,0,69500,73000,830000,332600,1162000,2235500,6146000,347397,180500,0,1509595,5000,1363000,500,
                310000,781000,79000,2178000,555000,60000,335500,26500,1000,100000,2936022,68000,204000,2186150,501200,65000]

#Fungsi Menu
def menu():
    print ("=========================================")
    print ("[1] Data Seluruh Bencana Prov. Jawa Tengah")
    print ("[2] Jumlah Kejadian Bencana")
    print ("[3] Jumlah Kerugian")
    print ("[4] Kerugian diatas 500.0000 dari Wilayah Prov. Jawa Tengah")
    print ("[5] Tampilkan String")
    print ("[6] Mengambil Nilai dari Data")
    print ("[7] Rata-Rata Kerugian Prov. Jawa Tengah")
    print ("[0] EXIT")
    print ("=========================================")

#Fungsi Bencana
def bencana():
    print("Data Bencana Prov Jawa Tengah sebagai berikut")

#Fungsi Filter
def filter_data_kerugian(data_kerugian):
    kerugian = [1007000,994500, 830000, 1162000, 2235500, 6146000, 1509595, 1363000, 781000, 2178000, 555000, 2936022, 2186150, 501200]
    if data_kerugian in kerugian:
        return True
    else:
        return False

menu()
option = int(input("Masukan Opsi : "))

#Loop untuk menu
while option != 0:
    #Menampilkan data mentah jika input 1
    if option == 1:
        bencana()
        print(data)
    #Menampilan jumlah kejadian bencana secara sorted jika input 2
    elif option == 2:
        tampilkan_kejadian = list(sorted(map(lambda x : x[1], data)))
        print(tampilkan_kejadian)
    #Menampilan jumlah kerugian bencana secara sorted jika input 2
    elif option == 3:
        tampilkan_kerugian = list(sorted(map(lambda x : x[2], data)))
        print(tampilkan_kerugian)
    #Menampilan filter kerugian bencana secara jika input 4
    elif option == 4:
        kerugian_terfilter = filter(filter_data_kerugian, data_kerugian)
        print("Data kerugian lebih dari 500k Adalah : ")
        for kerugian in kerugian_terfilter:
            print(kerugian)
    elif option == 5:
        print("Opsi 5 muncul")
    elif option == 6:
        print("Opsi 6 muncul")
    elif option == 7:
        print("Opsi 7 muncul")
    else:
        print("Opsi tidak tersedia")

    print()
    menu()
    option = int(input("Masukan Opsi : "))

print("Program selesai")