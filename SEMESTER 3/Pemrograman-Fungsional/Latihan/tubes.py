#SAAT INI Anda MENGGUNAKAN MENU PART 2

#Library yang digunakan dan di-import dari Python
from functools import reduce
import itertools

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

#Fungsi Menu
def menu():
    print ("=========================================")
    print ("[1] Data Seluruh Daerah Prov. Jawa Tengah")
    print ("[2] Data Seluruh Daerah Bencana Prov. Jawa Tengah")
    print ("[3] Jumlah Kejadian Bencana")
    print ("[4] Urutan Jumlah Kerugian")
    print ("[5] Total Jumlah Kerugian")
    print ("[6] Data Daerah dan Kerugian")
    print ("[7] Daerah dengan Jumlah Korban Diatas 100")
    print ("[8] Rata-Rata Kerugian")
    print ("[9] Data Daerah Valid")
    print ("[10] Data Daerah Acak")
    print ("[11] Permutasi Data Kejadian")
    print ("[12] Count data Korban")
    print ("[0] EXIT")
    print ("=========================================")

#Fungsi Bencana
def bencana():
    print()
    print("Data Bencana Prov Jawa Tengah")

#Fungsi Filter
def filter_data_korban(data_daerah):
    #List Data yang akan difilter
    kota_korban = ['Kebumen', 'Kota Surakarta', 'Sukoharjo']
    #jika data daerah ada di kota korban maka mengembalikan nilai true jika data tidak ada di kota korban akan mengembalikan nilai false
    if data_daerah in kota_korban:
        return True
    else:
        return False

#Fungsi Rata-rata
def rataan(data_kerugian):
    #rata = menggunakan fungsi reduce untuk menjumlahkan seluruh nilai data kerugian kemudian jumlahnya dibagi dengan panjang data kerugian
    rata = reduce(lambda x, y : x + y, data_kerugian) / len(data_kerugian)
    #mengembailkan nilai ke variabel rata
    return rata

menu()
option = int(input("Masukan Opsi : "))

#Loop untuk menu
while option != 0:
    #Menampilkan mentah keseluruhan
    if option == 1:
        #Untuk memanggil data daerah
        daerah_cycle = itertools.cycle(data_daerah)
        print('Berikut daerah yang tercatat dalam database adalah sbb : ')
        #Untuk melakukan loop terhadap data daerah sampai ke data terakhir
        for i in range(33):
            daerah = next(daerah_cycle)
            #Mengeluarkan Output 
            print('{}'.format(daerah))
    ##Menampilan data dengan group by
    elif option == 2:
        #Untuk set key func dengan nilai list ke 0
        key_func_1 = lambda x:x[0]
        #perulangan untuk membuat group dengan groupby data lengkap menggunakan key anggota list ke 1 
        for key, group in itertools.groupby(data_lengkap, key_func_1):
            #Mengeluarkan Output string dan isi list dari data lengkap
            print(str(key)+':',list(group))
    #Menampilan jumlah kejadian
    elif option == 3:
        #tampilkan kejadian = sebuah list yang di sorting yang sebelumnya diaplikasikan ke semua list data kejadian
        tampilkan_kejadian = list(sorted(map(lambda x : x, data_kejadian)))
        #Mengeluarkan Output dari tampilkan kejadian
        print(tampilkan_kejadian)
    #Menampilan urutan jumlah kerugian
    elif option == 4:
        #tampilkan kerugian = sebuah list yang di sorting yang sebelumnya diaplikasikan ke semua list data kerugian
        tampilkan_kerugian = list(sorted(map(lambda x : x, data_kerugian)))
        #Mengeluarkan Ouput dari isi tampilkan kerugian
        print(tampilkan_kerugian)
    #Menampilan total jumlah kerugian
    elif option == 5:
        #Untuk memanggil data total kerugian dengan menjumlahkan anggota next dengan anggota sebelumnya untuk kemudian di print 
        total_kerugian = itertools.accumulate(data_kerugian)
        print("Berikut adalah Jumlah Kerugian :")
        for kerugian in total_kerugian:
            #Mengeluarkan Output nilai dari penjumlahan dari data kerugian 
            print(kerugian)
    #Menampilkan data daerah dan kerugian
    elif option == 6:
        print("Berikut adalah Daerah dan Jumlah Kerugian :")
        daerah_kerugian = list(itertools.chain(data_daerah,data_kerugian))
        #Mengeluarkan Output
        print(daerah_kerugian)
    #Menampilkan daerah dengan jumlah korban diatas 100
    elif option == 7:
        korban_terfilter = filter(filter_data_korban, data_daerah)
        print("Data daerah dengan Korban diatas 100 : ")
        #Looping sekaligus menampilkan output data
        for kota_korban in korban_terfilter:
            print(kota_korban)
        print()
        print("Daerah Prioritas Penanggulangan Bencana")
    #Menampilkan rerata dari kerugian
    elif option == 8:
        rataan = rataan(data_kerugian)
        print("Rata-Rata Kerugian Prov Jawa Tengah")
        #Mengeluarkan Output
        #%0.2f adalah untuk menyederhanakan angka dibelakan koma
        print("%0.2f" % rataan)
    #Menampilkan data daerah ter-validasi
    elif option == 9:
        #Untuk memanggil data validasi
        indikator = [True,False,True,True,False,True,False,False,True]
        data_valid = itertools.compress(data_daerah,indikator)
        print("Daftar Daerah ter-Validasi adalah sebagai berikut :")
        #Looping sekaligus menampilkan output data        
        for validasi in data_valid:
            print('Data Daerah '+ validasi ,'sudah Valid')
    #Menampilkan daerah acak
    elif option == 10:
        #Untuk memanggil data daerah acak
        pasangan_daerahacak = itertools.combinations(data_daerah,2)
        #Looping sekaligus menampilkan output data
        for daerahacak in pasangan_daerahacak:
            print(daerahacak)
    #Permutasi data kejadian
    elif option == 11:
        #Untuk memanggil data permutasi kejadian
        permutasi_kejadian = itertools.permutations(data_kejadian,2)
        #Looping sekaligus menampilkan output data
        for kejadian in permutasi_kejadian:
            print(kejadian)
    #Count data Korban
    elif option == 12:
      print("Data Korban Adalah :")
      print(sorted(set([i for i in data_korban if data_korban.count(i)>-2])))
    else:
        #Jika option yang diinputkan oleh user tidak sesuai maka akan muncul output pesan seperti dibawah
        print("Opsi tidak tersedia")
        print("Apakah anda Ingin Mengulangi pilihan ?")
        kembali = input("Pilih (y/n) : ")
        if (kembali != "n"):           
            pass
        else:
            print("Program selesai, Terimakasih !!!")
            exit()
  
    print()
    menu()
    option = int(input("Masukan Opsi : "))

#Jika user memasukkan input angka 0, otomatis program akan berhenti
#Karena sesuai dengan perkondisian untuk melakukan loop pada kode program diatas
print("Program selesai, Terimakasih !!!")