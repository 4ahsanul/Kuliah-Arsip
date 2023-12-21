#include <iostream>
#include <windows.h>
#include <conio.h>

/*
    ====================================================
    Copyright Beny Alphon Tondang & ALWI SAHRUL AL FALAH
               Dibuat pada 6 Desember 2019
    ====================================================
*/

using namespace std;
// --------------- Variabel Global ---------------------------
string username, pass;
string space = "                                                                   ";
int a,b,c,d;

// ---------- Data Terstruktur NEM Pendaftaran Prestasi --------------
struct prestasi{
    double nem;
};

// -------------- Data Terstruktur Gajih orangtua Pendaftaran Bidikmisi ------------
struct bdkmisi{
    int gajih;
};

// ------------ Data Tersturktur Data Mahasiswa ---------------
struct data_mahasiswa{
    string nama_mhs;
    string ttl;
    string agm;
    string asklh;
    string hp;
    string almt;
    string jalur;
    string jrs;
    prestasi rata;
    bdkmisi ayah;
};
data_mahasiswa mahasiswa[100];

// ------- Prosedur deklarasi fungsi gotoxy ----------
void gotoxy(short int x,short int y){
   COORD k = {x,y};
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), k);
}

//----------- Fungsi Searching Index Cari Data -------------
int searchingData(struct data_mahasiswa mahasiswa[], int a, string search_nama){
    int posisi, i, ketemu;

    if (a <= 0)
        posisi = -1;
    else {
        ketemu = 0;
        i = 0;
        while ((i < a) && !ketemu) {

            if (mahasiswa[i].nama_mhs == search_nama) {
                posisi = i;
                ketemu = 1;
            }
             else {
                i++;
            }
            if (!ketemu) {
                posisi = -1;
            }
        }
    }
    return posisi;
}

void daftar_pres(){

    system("cls");
    gotoxy(28,1);cout << "==========================================================";
    gotoxy(28,2);cout << "|";
    gotoxy(28,3);cout << "|";
    gotoxy(28,4);cout << "|";
    gotoxy(40,2);cout << "B E F O R D   U N I V E R S I T Y";
    gotoxy(43,3);cout << "PENDAFTARAN MAHASISWA BARU";
    gotoxy(85,2);cout << "|";
    gotoxy(85,3);cout << "|";
    gotoxy(85,4);cout << "|";
    gotoxy(28,5);cout << "==========================================================";
    gotoxy(4,7);cout << "Banyak Mahasiswa yang mendaftar : ";
    gotoxy(38,7);cin >> b;
    for(c = 0; c < b; c++){
    mahasiswa[a].jalur="Prestasi";
        gotoxy(8,9);cout << "Data ke-" << c+1;
        gotoxy(8,10);cout << "Nama Mahasiwa Baru            : ";
        gotoxy(8,11);cout << "Tempat Tanggal Lahir          : ";
        gotoxy(8,12);cout << "Asal Sekolah                  : ";
        gotoxy(8,13);cout << "Alamat                        : ";
        gotoxy(8,14);cout << "No. HP                        : ";
        gotoxy(8,15);cout << "Pilih Jurusan                 : ";
        gotoxy(8,16);cout << "Agama                         : ";
        gotoxy(8,17);cout << "Masukan Nilai NEM             : ";

        cin.ignore();
        gotoxy(40,10);getline(cin,mahasiswa[a].nama_mhs);
        gotoxy(40,11);getline(cin,mahasiswa[a].ttl);
        gotoxy(40,12);getline(cin,mahasiswa[a].asklh);
        gotoxy(40,13);getline(cin,mahasiswa[a].almt);
        gotoxy(40,14);cin >> mahasiswa[a].hp;
        gotoxy(40,15);cin >> mahasiswa[a].jrs;
        gotoxy(40,16);cin >> mahasiswa[a].agm;
        gotoxy(40,17);cin >> mahasiswa[a].rata.nem;
        a++;
// ================ Inputan Kosong =====================
            gotoxy(40,10);cout << space;
            gotoxy(40,11);cout << space;
            gotoxy(40,12);cout << space;
            gotoxy(40,13);cout << space;
            gotoxy(40,14);cout << space;
            gotoxy(40,15);cout << space;
            gotoxy(40,16);cout << space;
            gotoxy(40,17);cout << space;
     }
     gotoxy(8,18);system("pause");
}

void daftar_bidik(){

    system("cls");
    gotoxy(28,1);cout << "==========================================================";
    gotoxy(28,2);cout << "|";
    gotoxy(28,3);cout << "|";
    gotoxy(28,4);cout << "|";
    gotoxy(40,2);cout << "B E F O R D   U N I V E R S I T Y";
    gotoxy(43,3);cout << "PENDAFTARAN MAHASISWA BARU";
    gotoxy(85,2);cout << "|";
    gotoxy(85,3);cout << "|";
    gotoxy(85,4);cout << "|";
    gotoxy(28,5);cout << "==========================================================";
    gotoxy(4,7);cout << "Banyak Mahasiswa yang mendaftar : ";
    gotoxy(38,7);cin >> b;
    for(c = 0; c < b; c++){
    mahasiswa[a].jalur="Bidikmisi";
        gotoxy(8,9);cout << "Data ke-" << c+1;
        gotoxy(8,10);cout << "Nama Mahasiwa Baru            : ";
        gotoxy(8,11);cout << "Tempat Tanggal Lahir          : ";
        gotoxy(8,12);cout << "Asal Sekolah                  : ";
        gotoxy(8,13);cout << "Alamat                        : ";
        gotoxy(8,14);cout << "No. HP                        : ";
        gotoxy(8,15);cout << "Pilih Jurusan                 : ";
        gotoxy(8,16);cout << "Agama                         : ";
        gotoxy(8,17);cout << "Masukan gaji total orang tua  : ";

        cin.ignore();
        gotoxy(40,10);getline(cin,mahasiswa[a].nama_mhs);
        gotoxy(40,11);getline(cin,mahasiswa[a].ttl);
        gotoxy(40,12);getline(cin,mahasiswa[a].asklh);
        gotoxy(40,13);getline(cin,mahasiswa[a].almt);
        gotoxy(40,14);cin >> mahasiswa[a].hp;
        gotoxy(40,15);cin >> mahasiswa[a].jrs;
        gotoxy(40,16);cin >> mahasiswa[a].agm;
        gotoxy(40,17);cin >> mahasiswa[a].ayah.gajih;
        a++;
// ===================== Inputan Kosong =======================
                gotoxy(40,10);cout << space;
                gotoxy(40,11);cout << space;
                gotoxy(40,12);cout << space;
                gotoxy(40,13);cout << space;
                gotoxy(40,14);cout << space;
                gotoxy(40,15);cout << space;
                gotoxy(40,16);cout << space;
                gotoxy(40,17);cout << space;
     }
     gotoxy(8,18);system("pause");
}

void daftar_reguler(){

    system("cls");
    gotoxy(28,1);cout << "==========================================================";
    gotoxy(28,2);cout << "|";
    gotoxy(28,3);cout << "|";
    gotoxy(28,4);cout << "|";
    gotoxy(40,2);cout << "B E F O R D   U N I V E R S I T Y";
    gotoxy(43,3);cout << "PENDAFTARAN MAHASISWA BARU";
    gotoxy(85,2);cout << "|";
    gotoxy(85,3);cout << "|";
    gotoxy(85,4);cout << "|";
    gotoxy(28,5);cout << "==========================================================";
    gotoxy(4,7);cout << "Banyak Mahasiswa yang mendaftar : ";
    gotoxy(38,7);cin >> b;
    for(c = 0; c < b; c++){
    mahasiswa[a].jalur="Reguler";
        gotoxy(8,9);cout << "Data ke-" << c+1;
        gotoxy(8,10);cout << "Nama Mahasiwa Baru          : ";
        gotoxy(8,11);cout << "Tempat Tanggal Lahir        : ";
        gotoxy(8,12);cout << "Asal Sekolah                : ";
        gotoxy(8,13);cout << "Alamat                      : ";
        gotoxy(8,14);cout << "No. HP                      : ";
        gotoxy(8,15);cout << "Agama                       : ";
        gotoxy(8,16);cout << "Pilih Jurusan               : ";

        cin.ignore();
        gotoxy(38,10);getline(cin,mahasiswa[a].nama_mhs);
        gotoxy(38,11);getline(cin,mahasiswa[a].ttl);
        gotoxy(38,12);getline(cin,mahasiswa[a].asklh);
        gotoxy(38,13);getline(cin,mahasiswa[a].almt);
        gotoxy(38,14);cin >> mahasiswa[a].hp;
        gotoxy(38,15);cin >> mahasiswa[a].agm;
        gotoxy(38,16);cin >> mahasiswa[a].jrs;
        a++;
    // =============== Inputan Kosong ==========================
                gotoxy(38,10);cout << space;
                gotoxy(38,11);cout << space;
                gotoxy(38,12);cout << space;
                gotoxy(38,13);cout << space;
                gotoxy(38,14);cout << space;
                gotoxy(38,15);cout << space;
                gotoxy(38,16);cout << space;
     }
     gotoxy(8,17);system("pause");
}

void sort_desc(){
    int i,j;

    system("cls");
    data_mahasiswa backup;
    for (i = 0; i < a; i++) {
        j = i;
        while (j > 0 && mahasiswa[j - 1].nama_mhs < mahasiswa[j].nama_mhs){
            backup = mahasiswa[j];
            mahasiswa[j] = mahasiswa[j-1];
            mahasiswa[j-1] = backup;
            j--;
        }
    }
}

void sort_ascending(){
    int i,j;

    system("cls");
    data_mahasiswa backup;
    for (i = 0; i < a; i++) {
        j = i;
        while (j > 0 && mahasiswa[j-1].nama_mhs > mahasiswa[j].nama_mhs) {
            backup = mahasiswa[j];
            mahasiswa[j] = mahasiswa[j-1];
            mahasiswa[j-1] = backup;
            j--;
        }
    }
}

void menu_daftar(){
    int pil_daf;

    men_daf:
    system("cls");
    gotoxy(28,3);cout << "==========================================================";
    gotoxy(28,4);cout << "|";
    gotoxy(40,4);cout << "B E F O R D   U N I V E R S I T Y";
    gotoxy(85,4);cout << "|";
    gotoxy(28,5);cout << "==========================================================";
    gotoxy(35,7);cout << "1. Jalur Reguler";
    gotoxy(35,8);cout << "2. Jalur Prestasi";
    gotoxy(35,9);cout << "3. Jalur Bidikmisi";
    gotoxy(35,10);cout << "Masukan pilihan anda [1/2/3] : ";
    gotoxy(28,12);cout << "==========================================================";
    gotoxy(66,10);cin >> pil_daf;
    if(pil_daf == 1){
        daftar_reguler();
    }
    else if(pil_daf == 2){
        daftar_pres();
    }
    else if(pil_daf == 3){
        daftar_bidik();
    }
    else{
        gotoxy(28,20);cout << "Pilihan tidak tersedia ...";
        system("pause");
        goto men_daf;
    }
}

void cari_data(){
    system("cls");
    string search_nama;

    gotoxy(30,1);cout << "==========================================================";
    gotoxy(30,2);cout << "|";
    gotoxy(42,2);cout << "B E F O R D   U N I V E R S I T Y";
    gotoxy(87,2);cout << "|";
    gotoxy(30,3);cout << "==========================================================";
    cin.ignore();
    gotoxy(51,5);cout << "PENCARIAN DATA";
    gotoxy(1,6);cout << "Masukan nama mahasiswa : ";getline(cin,search_nama);
    int posisi = searchingData(mahasiswa,a,search_nama);

    for (int i = 0; i < a ;i++){
        if(mahasiswa[i].nama_mhs == search_nama){

            gotoxy(5,8);cout << "Nama Mahasiwa Baru           : " << mahasiswa[i].nama_mhs;
            gotoxy(5,9);cout << "Tempat Tanggal Lahir         : " << mahasiswa[i].ttl;
            gotoxy(5,10);cout << "Asal Sekolah                : " << mahasiswa[i].asklh;
            gotoxy(5,11);cout << "Alamat                      : " << mahasiswa[i].almt;
            gotoxy(5,12);cout << "No. HP                      : " << mahasiswa[i].hp;
            gotoxy(5,13);cout << "Agama                       : " << mahasiswa[i].agm;
            gotoxy(5,14);cout << "Pilih Jurusan               : " << mahasiswa[i].jrs;
            gotoxy(5,15);cout << "Jalur                       : " << mahasiswa[i].jalur;
           }
        }
    if(posisi != -1) {
            gotoxy(5,16);cout << "Nama " << search_nama << " ditemukan pada posisi indeks ke-" << posisi+1;
        }
        else {
            gotoxy(1,12);cout << "--------------------------------------------------------------------------------------------------------------------";
            gotoxy(47,13);cout << "Nama " << search_nama << " tidak ditemukan";
            gotoxy(1,14);cout << "--------------------------------------------------------------------------------------------------------------------";
    }
   gotoxy(45,20);system("pause");
}

void tampil_data(){
    int i;
    system("cls");
    gotoxy(30,1);cout << "==========================================================";
    gotoxy(30,2);cout << "|";
    gotoxy(42,2);cout << "B E F O R D   U N I V E R S I T Y";
    gotoxy(87,2);cout << "|";
    gotoxy(30,3);cout << "==========================================================";
    for(i = 0; i < a; i++){
        gotoxy(1,10);cout << "--------------------------------------------------------------------------------------------------------------------";
        gotoxy(1,11);cout << "|";
        gotoxy(5,11);cout << "Nama Mahasiswa";
        gotoxy(33,11);cout << "TTL";
        gotoxy(60,11);cout << "Asal Sekolah";
        gotoxy(93,11);cout << "No.HP";
        gotoxy(116,11);cout << "|";

                gotoxy(1,12);cout << "--------------------------------------------------------------------------------------------------------------------";
                gotoxy(1,13+i);cout << mahasiswa[i].nama_mhs;
                gotoxy(28,13+i);cout << mahasiswa[i].ttl;
                gotoxy(58,13+i);cout << mahasiswa[i].asklh;
                gotoxy(90,13+i);cout << mahasiswa[i].hp;
            if (i == a-1){
                gotoxy(1,14+i);cout << "--------------------------------------------------------------------------------------------------------------------";
            }
     }
     getch();
     system("cls");
        gotoxy(49,16);cout << "------- Loading -------";
        gotoxy(46,17);system("pause");
}

void sorting_data(){
    int pil3;
    sorter:
        system("cls");
            gotoxy(30,1);cout << "==========================================================";
            gotoxy(30,2);cout << "|";
            gotoxy(42,2);cout << "B E F O R D   U N I V E R S I T Y";
            gotoxy(87,2);cout << "|";
            gotoxy(30,3);cout << "==========================================================";
            gotoxy(4,5);cout << "1. Urutan data secara Ascending";
            gotoxy(4,6);cout << "2. Urutan data secara Descending";
            gotoxy(4,7);cout << "3. Kembali";
            gotoxy(1,9);cout << "Sorting Data [1/2/3] : ";
            gotoxy(23,9);cin >> pil3;
                switch(pil3){
                    case 1:
                        sort_ascending();
                        tampil_data();
                        break;
                    case 2:
                        sort_desc();
                        tampil_data();
                        break;
                    case 3:
                        gotoxy(1,10);cout << "Tekan Enter Untuk Kembali ...";
                        getch();
                        break;
                    default:
                        gotoxy(52,10);cout << "Pilihan tidak ada";
                        getch();
                        goto sorter;
                }
}

void hasil_bidikmisi(){
    system("cls");
    int i;

    gotoxy(30,1);cout << "==========================================================";
    gotoxy(30,2);cout << "|";
    gotoxy(42,2);cout << "B E F O R D   U N I V E R S I T Y";
    gotoxy(87,2);cout << "|";
    gotoxy(30,3);cout << "==========================================================";
    for(i = 0; i < a; i++){
         if(mahasiswa[i].ayah.gajih <= 2500000 && mahasiswa[i].jalur == "Bidikmisi"){
              gotoxy(1,10);cout << "--------------------------------------------------------------------------------------------------------------------";
              gotoxy(1,11);cout << "|";
              gotoxy(5,11);cout << "Nama Mahasiswa";
              gotoxy(33,11);cout << "Asal Sekolah";
              gotoxy(52,11);cout << "Jurusan";
              gotoxy(70,11);cout << "Jalur";
              gotoxy(93,11);cout << "Status";
              gotoxy(116,11);cout << "|";

              gotoxy(1,12);cout << "--------------------------------------------------------------------------------------------------------------------";
              gotoxy(1,13+i);cout << mahasiswa[i].nama_mhs;
              gotoxy(28,13+i);cout << mahasiswa[i].asklh;
              gotoxy(52,13+i);cout << mahasiswa[i].jrs;
              gotoxy(70,13+i);cout << "Jalur Bidikmisi";
              gotoxy(90,13+i);cout << "Selamat, Berhasil !";
              if (i == a-1){
                gotoxy(1,15+i);cout << "--------------------------------------------------------------------------------------------------------------------";
            }
        }
        else{
              gotoxy(1,10);cout << "--------------------------------------------------------------------------------------------------------------------";
              gotoxy(1,11);cout << "|";
              gotoxy(5,11);cout << "Nama Mahasiswa";
              gotoxy(33,11);cout << "Asal Sekolah";
              gotoxy(52,11);cout << "Jurusan";
              gotoxy(70,11);cout << "Jalur";
              gotoxy(93,11);cout << "Status";
              gotoxy(116,11);cout << "|";

              gotoxy(1,12);cout << "--------------------------------------------------------------------------------------------------------------------";
              gotoxy(1,13+i);cout << mahasiswa[i].nama_mhs;
              gotoxy(28,13+i);cout << mahasiswa[i].asklh;
              gotoxy(52,13+i);cout << mahasiswa[i].jrs;
              if(mahasiswa[i].jalur == "Bidikmisi"){
                gotoxy(70,13+i);cout << "Jalur Bidikmisi";
              }
              else{
                gotoxy(70,13+i);cout << "-";
              }
              gotoxy(90,13+i);cout << "Gagal, Jangan Bersedih";
         if (i == a-1){
                gotoxy(1,14+i);cout << "--------------------------------------------------------------------------------------------------------------------";
            }
        }
    }
     getch();
     system("cls");
        gotoxy(49,16);cout << "------- Loading -------";
        gotoxy(46,17);system("pause");
}

void hasil_pres(){
    system("cls");
    int i;

    gotoxy(30,1);cout << "==========================================================";
    gotoxy(30,2);cout << "|";
    gotoxy(42,2);cout << "B E F O R D   U N I V E R S I T Y";
    gotoxy(87,2);cout << "|";
    gotoxy(30,3);cout << "==========================================================";
    for(i = 0; i < a; i++){
         if(mahasiswa[i].rata.nem >= 75 && mahasiswa[i].jalur == "Prestasi"){
              gotoxy(1,10);cout << "--------------------------------------------------------------------------------------------------------------------";
              gotoxy(1,11);cout << "|";
              gotoxy(5,11);cout << "Nama Mahasiswa";
              gotoxy(33,11);cout << "Asal Sekolah";
              gotoxy(52,11);cout << "Jurusan";
              gotoxy(70,11);cout << "Jalur";
              gotoxy(93,11);cout << "Status";
              gotoxy(116,11);cout << "|";

              gotoxy(1,12);cout << "--------------------------------------------------------------------------------------------------------------------";
              gotoxy(1,13+i);cout << mahasiswa[i].nama_mhs;
              gotoxy(28,13+i);cout << mahasiswa[i].asklh;
              gotoxy(52,13+i);cout << mahasiswa[i].jrs;
              gotoxy(70,13+i);cout << "Jalur Prestasi";
              gotoxy(90,13+i);cout << "Selamat, Berhasil !";
              if (i == a-1){
                gotoxy(1,15+i);cout << "--------------------------------------------------------------------------------------------------------------------";
            }
        }
        else{
              gotoxy(1,10);cout << "--------------------------------------------------------------------------------------------------------------------";
              gotoxy(1,11);cout << "|";
              gotoxy(5,11);cout << "Nama Mahasiswa";
              gotoxy(33,11);cout << "Asal Sekolah";
              gotoxy(52,11);cout << "Jurusan";
              gotoxy(70,11);cout << "Jalur";
              gotoxy(93,11);cout << "Status";
              gotoxy(116,11);cout << "|";

              gotoxy(1,12);cout << "--------------------------------------------------------------------------------------------------------------------";
              gotoxy(1,13+i);cout << mahasiswa[i].nama_mhs;
              gotoxy(28,13+i);cout << mahasiswa[i].asklh;
              gotoxy(52,13+i);cout << mahasiswa[i].jrs;
              if(mahasiswa[i].jalur == "Prestasi"){
                gotoxy(70,13+i);cout << "Jalur Prestasi";
              }
              else{
                gotoxy(70,13+i);cout << "-";
              }
              gotoxy(90,13+i);cout << "Gagal, Jangan Bersedih";
         if (i == a-1){
                gotoxy(1,14+i);cout << "--------------------------------------------------------------------------------------------------------------------";
            }
        }
    }
     getch();
     system("cls");
        gotoxy(49,16);cout << "------- Loading -------";
        gotoxy(46,17);system("pause");
}

void jalur_pendaftaran(){
    system("cls");
    gotoxy(28,1);cout << "==========================================================";
    gotoxy(28,2);cout << "|";
    gotoxy(28,3);cout << "|";
    gotoxy(28,4);cout << "|";
    gotoxy(28,5);cout << "|";
    gotoxy(28,6);cout << "|";
    gotoxy(40,2);cout << "B E F O R D   U N I V E R S I T Y";
    gotoxy(29,3);cout << "---------------------------------------------------------";
    gotoxy(42,4);cout << "Jalur Pendaftaran Yang Tersedia";
    gotoxy(44,5);cout << "Jadwal-Hasil Seleksi-Berita";
    gotoxy(39,6);cout << "Update setiap hari Senin dan Selasa";
    gotoxy(85,2);cout << "|";
    gotoxy(85,3);cout << "|";
    gotoxy(85,4);cout << "|";
    gotoxy(85,5);cout << "|";
    gotoxy(85,6);cout << "|";
    gotoxy(28,7);cout << "==========================================================";
    gotoxy(1,10);cout << "Jalur Pendaftaran Yang Tersedia di Beford University :";
    gotoxy(6,11);cout << "- Jalur Prestasi";
    gotoxy(6,12);cout << "- Jalur Reguler";
    gotoxy(6,13);cout << "- Jalur Bidikmisi";
    gotoxy(1,17);cout << "Tekan Enter Untuk Kembali ...";
    getch();
}

void info_pen(){
    system("cls");
    gotoxy(28,1);cout << "==========================================================";
    gotoxy(28,2);cout << "|";
    gotoxy(28,3);cout << "|";
    gotoxy(28,4);cout << "|";
    gotoxy(28,5);cout << "|";
    gotoxy(28,6);cout << "|";
    gotoxy(40,2);cout << "B E F O R D   U N I V E R S I T Y";
    gotoxy(29,3);cout << "---------------------------------------------------------";
    gotoxy(50,4);cout << "Jadwal Penting";
    gotoxy(44,5);cout << "Jadwal-Hasil Seleksi-Berita";
    gotoxy(39,6);cout << "Update setiap hari Senin dan Selasa";
    gotoxy(85,2);cout << "|";
    gotoxy(85,3);cout << "|";
    gotoxy(85,4);cout << "|";
    gotoxy(85,5);cout << "|";
    gotoxy(85,6);cout << "|";
    gotoxy(28,7);cout << "==========================================================";

    gotoxy(1,10);cout << "Jadwal Pembukaan Pendaftaran Mahasiswa Baru";
    gotoxy(6,12);cout << "Jalur Prestasi 1          : 1 Desember 2019 - 22 Febuari 2020";
    gotoxy(6,13);cout << "Jalur Prestasi 2          : 24 Febuari - 25 April 2020";
    gotoxy(6,14);cout << "Jalur Reguler 1           : 1 Desember 2019 - 7 Mei 2020";
    gotoxy(6,15);cout << "Jalur Reguler 2           : 3 Mei - 20 Juli 2020";
    gotoxy(6,16);cout << "Jalur Reguler 3           : 15 Agustus - 25 Oktober 2020";
    gotoxy(6,17);cout << "Jalur Bidikmisi           : 28 Mei 2020 - 30 Juni 2020";

    gotoxy(1,20);cout << "Tekan Enter Untuk Kembali ...";
    getch();
}

void pengumuman(){
  int pil_peng;

  peng:
      system("cls");
            gotoxy(28,1);cout << "==========================================================";
            gotoxy(28,2);cout << "|";
            gotoxy(28,3);cout << "|";
            gotoxy(28,4);cout << "|";
            gotoxy(28,5);cout << "|";
            gotoxy(28,6);cout << "|";
            gotoxy(40,2);cout << "B E F O R D   U N I V E R S I T Y";
            gotoxy(29,3);cout << "---------------------------------------------------------";
            gotoxy(54,4);cout << "BEKAM";
            gotoxy(44,5);cout << "B E R I T A -- K A M P U S";
            gotoxy(39,6);cout << "Update setiap hari Senin dan Selasa";
            gotoxy(85,2);cout << "|";
            gotoxy(85,3);cout << "|";
            gotoxy(85,4);cout << "|";
            gotoxy(85,5);cout << "|";
            gotoxy(85,6);cout << "|";
            gotoxy(28,7);cout << "==========================================================";

            gotoxy(30,9);cout << "1. Jalur Pendaftaran";
            gotoxy(30,10);cout << "2. Informasi Pendaftaran";
            gotoxy(30,11);cout << "Masukan pilihan anda [1/2] : ";
            gotoxy(59,11);cin >> pil_peng;
            switch(pil_peng){
                case 1:
                    jalur_pendaftaran();
                break;
                case 2:
                    info_pen();
                break;
                default:
                    gotoxy(12,12);cout << "Pilihan tidak tersedia";
                    getch();
                    goto peng;
            }
}

void jurusan(){
    system("cls");

        gotoxy(30,1);cout << "==========================================================";
        gotoxy(30,2);cout << "|";
        gotoxy(42,2);cout << "B E F O R D   U N I V E R S I T Y";
        gotoxy(87,2);cout << "|";
        gotoxy(30,3);cout << "==========================================================";
        gotoxy(4,5);cout << " - S1 Desain Komunikasi Visual (DKV)";
        gotoxy(4,6);cout << " - S1 Sistem Informasi (SI)";
        gotoxy(4,7);cout << " - S1 Teknik Industri (TI)";
        gotoxy(4,8);cout << " - S1 Teknik Informatika (IF)";
        gotoxy(4,9);cout << " - S1 Teknik Telekomunikasi (TT)";
        gotoxy(4,10);cout << " - D3 Teknik Telekomunikasi (D3TT)";
        gotoxy(1,20);cout << "Tekan Enter Untuk Kembali ...";

    getch();
}

void info(){
    int pil_info;

    info1:
    system("cls");
    gotoxy(28,1);cout << "==========================================================";
    gotoxy(28,2);cout << "|";
    gotoxy(28,3);cout << "|";
    gotoxy(28,4);cout << "|";
    gotoxy(28,5);cout << "|";
    gotoxy(28,6);cout << "|";
    gotoxy(40,2);cout << "B E F O R D   U N I V E R S I T Y";
    gotoxy(29,3);cout << "---------------------------------------------------------";
    gotoxy(51,4);cout << "PENGUMUMAN";
    gotoxy(44,5);cout << "Jadwal-Hasil Seleksi-Berita";
    gotoxy(39,6);cout << "Update setiap hari Senin dan Selasa";
    gotoxy(85,2);cout << "|";
    gotoxy(85,3);cout << "|";
    gotoxy(85,4);cout << "|";
    gotoxy(85,5);cout << "|";
    gotoxy(85,6);cout << "|";
    gotoxy(28,7);cout << "==========================================================";
    gotoxy(28,9);cout << "Info Kampus";
    gotoxy(28,10);cout << "1. Pengumuman";
    gotoxy(28,11);cout << "2. Daftar Jurusan";
    gotoxy(28,12);cout << "3. Hasil PMB Bidikmisi";
    gotoxy(28,13);cout << "4. Hasil PMB Prestasi";

    gotoxy(28,14);cout << "Masukan Pilihan anda [1/2/3/4] : ";
    gotoxy(61,14);cin >> pil_info;
            switch(pil_info){
                case 1:
                    pengumuman();
                    break;
                case 2:
                    jurusan();
                    break;
                case 3:
                    hasil_bidikmisi();
                    break;
                case 4:
                    hasil_pres();
                    break;
                default:
                    gotoxy(10,15);cout << "Error::Pilihan Tidak Tersedia --";
                    getch();
                    goto info1;
            }
}

int main()
{
//--------------- Login Form ------------------
login:
  system("cls");

    gotoxy(43,1);cout << "LOGIN FORM ADMIN BEFORD UNIVERSITY";
    gotoxy(1,3);cout << "----------------------------------------------------------------------------------------------------------------------";
    gotoxy(34,4);cout << "Masukan Username   : ";
    gotoxy(34,5);cout << "Password           : ";
    gotoxy(1,7);cout << "----------------------------------------------------------------------------------------------------------------------";
    gotoxy(55,4);cin >> username;
    gotoxy(55,5);cin >> pass;
    gotoxy(55,5);cout << space;

    if (username == "admin" && pass == "admin123"){
        gotoxy(46,6);cout << "-- Berhasil Login --";
        getch();
    }
    else{
        gotoxy(34,6);cout << "Username and Password isn't matching with our database --";
        getch();
        goto login;
    }
// -------------- Variabel Lokal ---------------
   atas:
    char kel;
    int pil1;
    system("cls");
// ------------------- Menu Utama -----------------
    gotoxy(28,3);cout << "==========================================================";
    gotoxy(28,4);cout << "|";
    gotoxy(28,5);cout << "|";
    gotoxy(28,6);cout << "|";
    gotoxy(28,7);cout << "|";
    gotoxy(28,8);cout << "|";
    gotoxy(28,9);cout << "|";
    gotoxy(28,10);cout << "|";
    gotoxy(28,11);cout << "|";
    gotoxy(28,12);cout << "|";
    gotoxy(28,13);cout << "|";
    gotoxy(28,14);cout << "|";
    gotoxy(28,15);cout << "|";
    gotoxy(40,4);cout << "B E F O R D   U N I V E R S I T Y";
    gotoxy(28,5);cout << "==========================================================";
    gotoxy(50,6);cout << "M E N U   U T A M A";
    gotoxy(35,7);cout << "1. Pendaftaran Mahasiswa Baru";
    gotoxy(35,8);cout << "2. Informasi Jurusan";
    gotoxy(35,9);cout << "3. Cari Data Mahasiswa Baru";
    gotoxy(35,10);cout << "4. Tampilkan Data";
    gotoxy(35,11);cout << "5. Sorting Data";
    gotoxy(35,12);cout << "6. Keluar";
    gotoxy(35,13);cout << "Masukan Pilihan [1/2/3/4/5/6] : ";
    gotoxy(28,16);cout << "==========================================================";
    gotoxy(85,4);cout << "|";
    gotoxy(85,5);cout << "|";
    gotoxy(85,6);cout << "|";
    gotoxy(85,7);cout << "|";
    gotoxy(85,8);cout << "|";
    gotoxy(85,9);cout << "|";
    gotoxy(85,10);cout << "|";
    gotoxy(85,11);cout << "|";
    gotoxy(85,12);cout << "|";
    gotoxy(85,13);cout << "|";
    gotoxy(85,14);cout << "|";
    gotoxy(85,15);cout << "|";

    gotoxy(67,13);cin >> pil1;
     switch (pil1){
        case 1:
            system("cls");
            menu_daftar();
            goto atas;
          break;
        case 2:
            info();
            goto atas;
          break;
        case 3:
            cari_data();
            goto atas;
          break;
        case 4:
            tampil_data();
            goto atas;
          break;
        case 5:
            sorting_data();
            goto atas;
          break;
        case 6:
            system("cls");
            // --------- Menu Keluar -----------
              gotoxy(43,12);cout << "Apakah anda yakin ingin keluar ? ";
              gotoxy(51,13);cout << "[Y]        [N] ";
              gotoxy(57,14);cin  >> kel;
                 if (kel=='Y' || kel=='y'){
                    system("cls");
                    gotoxy(35,12);cout << "**** PROGRAM BERAKHIR ****" ;
                    cout << endl;
                }
                 else if (kel=='N' || kel=='n'){
                    system("cls");
                    goto atas;
                }
                 else{
                    goto atas;
                }
            break;
        default:
            gotoxy(50,14);cout << "Pilihan Tidak ada";
            gotoxy(44,15);system("pause");
            goto atas;
    }
    return 0;
}
