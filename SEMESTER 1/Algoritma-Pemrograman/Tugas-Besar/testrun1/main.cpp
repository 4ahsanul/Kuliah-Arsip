//Library
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

using namespace std;
//=======================================================================================================================================================================================================
//Prosedur Goto X & Y
void gotoxy(int x, int y){
    COORD k = {(x), y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), k);
}

//Deklarasi Pilihan dan Ulang
int pilihan;
string ulang;

//Struct Nama Lengkap
struct namalengkap{
    string namadepan;
    string namabelakang;
};

//Struct Data Diri
struct datadiri{
    namalengkap nama; // Tipe data bentukan dari nama lengkap
    char umur[20];
    char alamat[50];
};
datadiri pasien[50];

//String Untuk Deklarasi Dokter
string dokter1, dokter2, dokter3;

//Deklarasi NIK
int nik;

//Deklarasi Pendaftaran
int i,n,a,nikk;

//Searching Sequential
int sequential_search(string data[], int panjang, string key){
    int posisi, ketemu;
    if(panjang <= 0){
        posisi = -1;
    } else {
        ketemu = 0;
        int i = 1;
        while ((i < panjang - 1) && !ketemu){
            if (data[i] == key) {
                posisi = i;
                ketemu = 1;
            } else {
                i++;
            }
            if (!ketemu){
                posisi = -1;
            }
        }
    }
    return posisi;
}


//Sorting Insertion
void insertion_sort(int arr[], int length){
    int i, j, tmp;

    for (i = 1; i < length; i++){
        j = i;

        while (j > 0 && arr[j - 1] > arr[j]){
            tmp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = tmp;
            j--;
        }
    }
}

//Print Array
void print_array(int a[], int length){

    for (int i = 0; i < length; i++){
        cout << a[i] << "\t";
    }
    cout << endl;
}
//=======================================================================================================================================================================================================

int main(){
    do{

        system("cls");

        gotoxy(50, 1);cout << "=====================================" << endl;
        gotoxy(50, 2);cout << "|         RS. MARYONO KUSUMO        |" << endl;
        gotoxy(50, 3);cout << "=====================================" << endl;

        gotoxy(45, 5); cout << "1. Jadwal Praktik Dokter Umum" << endl;
        gotoxy(45, 6); cout << "2. Jadwal Praktik Dokter Gigi" << endl;
        gotoxy(45, 7); cout << "3. Jadwal Praktik Dokter Mata" << endl;
        gotoxy(45, 8); cout << "4. Pencarian Data RS. MARYONO KUSUMO" << endl;
        gotoxy(45, 9); cout << "5. Statistik Data Kunjungan Pasien" << endl;
        gotoxy(45, 10); cout << "0. Keluar" << endl;
        gotoxy(45, 11); cout << "Masukkan Pilihan : ";
        gotoxy(45, 12); cout << "=====================================" << endl;
        gotoxy(65, 11); cin >> pilihan;


        if (pilihan == 1){
                    system("cls");
                    gotoxy(40, 2); cout << "========== Daftar Menu Praktik Dokter Umum ==========" << endl;
                    gotoxy(50, 4); cout << "1. Jadwal Praktik" << endl;
                    gotoxy(50, 5); cout << "2. Mendaftar Pasien" << endl;
                    gotoxy(50, 6); cout << "3. Daftar Pasien" << endl;
                    gotoxy(50, 7); cout << "Masukan pilihan anda : ";
                    gotoxy(40, 8); cout << "=====================================================" << endl;
                    gotoxy(74, 7); cin >> pilihan;
                    system("cls");

                    if (pilihan == 1) {
                        gotoxy(40, 5);
                        cout << "========== JADWAL PRAKTIK DOKTER UMUM=========" << endl;
                        gotoxy(42, 7);
                        cout << "+========================================+" << endl;
                        //Tabel Judul
                        gotoxy(42, 8);
                        cout << "|";
                        gotoxy(44, 8);
                        cout << " Hari   |";
                        gotoxy(59, 8);
                        cout << "Jam      |";
                        gotoxy(71, 8);
                        cout << "Nama Dokter |";
                        //Akhir dari Hari
                        gotoxy(42, 9);
                        cout << "+----------------------------------------+";
                        gotoxy(42, 10);
                        cout << "| Senin   | 08.00 - 15.00 |  Dr. Susilo  |";
                        gotoxy(42, 11);
                        cout << "+----------------------------------------+";
                        gotoxy(42, 12);
                        cout << "| Selasa  | 08.00 - 15.00 |  Dr. Susilo  |";
                        gotoxy(42, 13);
                        cout << "+----------------------------------------+";
                        gotoxy(42, 14);
                       	cout << "| Rabu    | 08.00 - 15.00 |  Dr. Susilo  |";
                        gotoxy(42, 15);
                        cout << "+----------------------------------------+";
                        gotoxy(42, 16);
                        cout << "| Kamis   | 08.00 - 15.00 |  Dr. Susilo  |";
                        gotoxy(42, 17);
                        cout << "+----------------------------------------+";
                        gotoxy(42, 18);
                        cout << "| Jumat   | 08.00 - 15.00 |  Dr. Bambang |";
                        gotoxy(42, 19);
                        cout << "+----------------------------------------+";
                        gotoxy(42, 20);
                        cout << "| Sabtu   | 08.00 - 15.00 |  Dr. Bambang |";
                        gotoxy(42, 21);
                        cout << "+----------------------------------------+";
                        gotoxy(42, 22);
                        cout << "| Minggu  | 08.00 - 15.00 |  Dr. Bambang |";
                        gotoxy(42, 23);
                        cout << "+----------------------------------------+" << endl << endl;
                    } else if (pilihan ==2) {
                        gotoxy(40, 5); cout << "========== PENDAFTARAN PASIEN ==========" << endl << endl;
                        gotoxy(40,7);  cout << "Masukkan banyak data : ";
                        gotoxy(40,10);  cout << "========================================" << endl <<endl;
                        gotoxy(62,7);  cin >> n;

                        for (i = 1; i <= n; i++) {
                            system("cls");
                            dokter1 = "Umum";
                            gotoxy(50, 1);
                            cout << "========== DAFTAR PASIEN ==========" << endl << endl;
                            gotoxy(40, 3);
                            cout << "Data Pasien Ke- " << i << endl;
                            gotoxy(40, 4);
                            cout << "Masukkan Nama Depan         : ";
                            gotoxy(40, 5);
                            cout << "Masukkan Nama Belakang      : ";
                            gotoxy(40, 6);
                            cout << "Masukkan No Identitas       : ";
                            gotoxy(40, 7);
                            cout << "Masukkan Umur               : ";
                            gotoxy(40, 8);
                            cout << "Masukkan Praktik Dokter     : ";
                            gotoxy(40, 9);
                            cout << "Masukkan Alamat             : ";
                            gotoxy(71, 8);
                            cout << dokter1;
                            gotoxy(40, 11); cout << "================================================" << endl << endl;

                            gotoxy(71, 4);
                            cin >> pasien[i].nama.namadepan;
                            gotoxy(71, 5);
                            cin >> pasien[i].nama.namabelakang;
                            gotoxy(71, 6);
                            cin >> nik;
                            gotoxy(71, 7);
                            cin >> pasien[i].umur;
                            gotoxy(71, 9);
                            cin >> pasien[i].alamat;
                            cout << endl << endl;
                        }
                        system("pause");
                    } else if (pilihan == 3) {
                        //Menampilkan List Pasien
                        if (dokter1 == "Umum") {
                            for (i = 1; i <= n; i++) {
                                cout << "\t \t \t \t \t \t"; cout << "=================================" << endl;
                                cout << "\t \t \t \t \t \t"; cout << "========DATA PASIEN Ke -" << i << "========" << endl;
                                cout << "\t \t \t \t \t \t"; cout << "=================================" << endl << endl;

                                cout << "\t \t \t \t \t \t"; cout << "Nama   : " << pasien[i].nama.namadepan << " " << pasien[i].nama.namabelakang << endl;
                                cout << "\t \t \t \t \t \t"; cout << "NIK    : " << nik << endl;
                                cout << "\t \t \t \t \t \t"; cout << "Umur   : " << pasien[i].umur << endl;
                                cout << "\t \t \t \t \t \t"; cout << "Dokter : " << dokter1 << endl;
                                cout << "\t \t \t \t \t \t"; cout << "Alamat : " << pasien[i].alamat << endl;
                                cout << "\t \t \t \t \t \t"; cout << "---------------------------------" << endl << endl;
                            }
                        }
                    } else {
                        cout << "Data tidak ditemukan";
                        cout << endl << endl;
                    } cout << "Kembali ke Menu (y/n)";
                      cin >> ulang;
        }

        else if (pilihan == 2){
                    system("cls");
                    gotoxy(40, 2); cout << "========== Daftar Menu Praktik Dokter Gigi ==========" << endl;
                    gotoxy(50, 4); cout << "1. Jadwal Praktik" << endl;
                    gotoxy(50, 5); cout << "2. Mendaftar Antrian" << endl;
                    gotoxy(50, 6); cout << "3. Daftar Antrian" << endl;
                    gotoxy(50, 7); cout << "Masukan pilihan anda : ";
                    gotoxy(40, 8); cout << "=====================================================" << endl;
                    gotoxy(74, 7); cin >> pilihan;
                    system("cls");

                    if (pilihan == 1) {
                        			gotoxy(40, 5);
                        cout << "========== JADWAL PRAKTIK DOKTER GIGI=========" << endl;
                        gotoxy(42, 7);
                        cout << "+========================================+" << endl;
                        //Tabel Judul
                        gotoxy(42, 8);
                        cout << "|";
                        gotoxy(44, 8);
                        cout << " Hari   |";
                        gotoxy(59, 8);
                        cout << "Jam      |";
                        gotoxy(71, 8);
                        cout << "Nama Dokter |";
                        //Akhir dari Hari
                        gotoxy(42, 9);
                        cout << "+----------------------------------------+";
                        gotoxy(42, 10);
                        cout << "| Senin   |       -       |       -      |";
                        gotoxy(42, 11);
                        cout << "+----------------------------------------+";
                        gotoxy(42, 12);
                        cout << "| Selasa  | 09.00 - 14.00 |  Dr. Andreas |";
                        gotoxy(42, 13);
                        cout << "+----------------------------------------+";
                        gotoxy(42, 14);
                       	cout << "| Rabu    |       -       |       -      |";
                        gotoxy(42, 15);
                        cout << "+----------------------------------------+";
                        gotoxy(42, 16);
                        cout << "| Kamis   | 09.00 - 14.00 |  Dr. Andreas |";
                        gotoxy(42, 17);
                        cout << "+----------------------------------------+";
                        gotoxy(42, 18);
                        cout << "| Jumat   |       -       |       -      |";
                        gotoxy(42, 19);
                        cout << "+----------------------------------------+";
                        gotoxy(42, 20);
                        cout << "| Sabtu   | 09.00 - 14.00 |  Dr. Andreas |";
                        gotoxy(42, 21);
                        cout << "+----------------------------------------+";
                        gotoxy(42, 22);
                        cout << "| Minggu  |       -       |       -      |";
                        gotoxy(42, 23);
                        cout << "+----------------------------------------+" << endl << endl;
                    } else if (pilihan ==2) {
                        gotoxy(40, 5); cout << "========== PENDAFTARAN PASIEN ==========" << endl << endl;
                        gotoxy(40,7);  cout << "Masukkan banyak data : ";
                        gotoxy(40,10);  cout << "========================================" << endl <<endl;
                        gotoxy(62,7);  cin >> n;

                        for (i = 1; i <= n; i++) {
                            system("cls");
                            dokter2 = "Gigi";
                            gotoxy(50, 1);
                            cout << "========== DAFTAR PASIEN ==========" << endl << endl;
                            gotoxy(40, 3);
                            cout << "Data Pasien Ke- " << i << endl;
                            gotoxy(40, 4);
                            cout << "Masukkan Nama Depan         : ";
                            gotoxy(40, 5);
                            cout << "Masukkan Nama Belakang      : ";
                            gotoxy(40, 6);
                            cout << "Masukkan No Identitas       : ";
                            gotoxy(40, 7);
                            cout << "Masukkan Umur               : ";
                            gotoxy(40, 8);
                            cout << "Masukkan Praktik Dokter     : ";
                            gotoxy(40, 9);
                            cout << "Masukkan Alamat             : ";
                            gotoxy(71, 8);
                            cout << dokter2;
                            gotoxy(40, 11); cout << "================================================" << endl << endl;

                            gotoxy(71, 4);
                            cin >> pasien[i].nama.namadepan;
                            gotoxy(71, 5);
                            cin >> pasien[i].nama.namabelakang;
                            gotoxy(71, 6);
                            cin >> nik;
                            gotoxy(71, 7);
                            cin >> pasien[i].umur;
                            gotoxy(71, 9);
                            cin >> pasien[i].alamat;
                            cout << endl << endl;
                        }
                        system("pause");
                    } else if (pilihan == 3) {
                        //Menampilkan List Pasien
                        if (dokter2 == "Gigi") {
                            for (i = 1; i <= n; i++) {
                                cout << "\t \t \t \t \t \t"; cout << "=================================" << endl;
                                cout << "\t \t \t \t \t \t"; cout << "========DATA PASIEN Ke -" << i << "========" << endl;
                                cout << "\t \t \t \t \t \t"; cout << "=================================" << endl << endl;

                                cout << "\t \t \t \t \t \t"; cout << "Nama   : " << pasien[i].nama.namadepan << " " << pasien[i].nama.namabelakang << endl;
                                cout << "\t \t \t \t \t \t"; cout << "NIK    : " << nik << endl;
                                cout << "\t \t \t \t \t \t"; cout << "Umur   : " << pasien[i].umur << endl;
                                cout << "\t \t \t \t \t \t"; cout << "Dokter : " << dokter2 << endl;
                                cout << "\t \t \t \t \t \t"; cout << "Alamat : " << pasien[i].alamat << endl;
                                cout << "\t \t \t \t \t \t"; cout << "---------------------------------" << endl << endl;
                            }
                        }
                    } else {
                        cout << "Data tidak ditemukan";
                    } cout << "Kembali ke Menu (y/n)";
                      cin >> ulang;
        }

        else if (pilihan == 3){
                    system("cls");
                    gotoxy(40, 2); cout << "========== Daftar Menu Praktik Dokter Umum ==========" << endl;
                    gotoxy(50, 4); cout << "1. Jadwal Praktik" << endl;
                    gotoxy(50, 5); cout << "2. Mendaftar Antrian" << endl;
                    gotoxy(50, 6); cout << "3. Daftar Antrian" << endl;
                    gotoxy(50, 7); cout << "Masukan pilihan anda : ";
                    gotoxy(40, 8); cout << "=====================================================" << endl;
                    gotoxy(74, 7); cin >> pilihan;
                    system("cls");

                    if (pilihan == 1) {
                        gotoxy(40, 5);
                        cout << "========== JADWAL PRAKTIK DOKTER MATA =========" << endl;
                        gotoxy(42, 7);
                        cout << "+========================================+" << endl;
                        //Tabel Judul
                        gotoxy(42, 8);
                        cout << "|";
                        gotoxy(44, 8);
                        cout << " Hari   |";
                        gotoxy(59, 8);
                        cout << "Jam      |";
                        gotoxy(71, 8);
                        cout << "Nama Dokter |";
                        //Akhir dari Hari
                        gotoxy(42, 9);
                        cout << "+----------------------------------------+";
                        gotoxy(42, 10);
                        cout << "| Senin   | 10.00 - 15.00 |  Dr. Andrian |";
                        gotoxy(42, 11);
                        cout << "+----------------------------------------+";
                        gotoxy(42, 12);
                        cout << "| Selasa  |       -       |       -      |";
                        gotoxy(42, 13);
                        cout << "+----------------------------------------+";
                        gotoxy(42, 14);
                        cout << "| Rabu    | 10.00 - 15.00 |  Dr. Andrian |";
                        gotoxy(42, 15);
                        cout << "+----------------------------------------+";
                        gotoxy(42, 16);
                        cout << "| Kamis   |       -       |       -      |";
                        gotoxy(42, 17);
                        cout << "+----------------------------------------+";
                        gotoxy(42, 18);
                        cout << "| Jumat   | 10.00 - 15.00 |  Dr. Wina    |";
                        gotoxy(42, 19);
                        cout << "+----------------------------------------+";
                        gotoxy(42, 20);
                        cout << "| Sabtu   |       -       |       -      |";
                        gotoxy(42, 21);
                        cout << "+----------------------------------------+";
                        gotoxy(42, 22);
                        cout << "| Minggu  |       -       |       -      |";
                        gotoxy(42, 23);
                        cout << "+----------------------------------------+" << endl << endl;
                    } else if (pilihan ==2) {
                        gotoxy(40, 5); cout << "========== PENDAFTARAN PASIEN ==========" << endl << endl;
                        gotoxy(40,7);  cout << "Masukkan banyak data : ";
                        gotoxy(40,10);  cout << "========================================" << endl <<endl;
                        gotoxy(62,7);  cin >> n;

                        for (i = 1; i <= n; i++) {
                            system("cls");
                            dokter3 = "Mata";
                            gotoxy(50, 1);
                            cout << "========== DAFTAR PASIEN ==========" << endl << endl;
                            gotoxy(40, 3);
                            cout << "Data Pasien Ke- " << i << endl;
                            gotoxy(40, 4);
                            cout << "Masukkan Nama Depan         : ";
                            gotoxy(40, 5);
                            cout << "Masukkan Nama Belakang      : ";
                            gotoxy(40, 6);
                            cout << "Masukkan No Identitas       : ";
                            gotoxy(40, 7);
                            cout << "Masukkan Umur               : ";
                            gotoxy(40, 8);
                            cout << "Masukkan Praktik Dokter     : ";
                            gotoxy(40, 9);
                            cout << "Masukkan Alamat             : ";
                            gotoxy(71, 8);
                            cout << dokter3;
                            gotoxy(40, 11); cout << "================================================" << endl << endl;

                            gotoxy(71, 4);
                            cin >> pasien[i].nama.namadepan;
                            gotoxy(71, 5);
                            cin >> pasien[i].nama.namabelakang;
                            gotoxy(71, 6);
                            cin >> nik;
                            gotoxy(71, 7);
                            cin >> pasien[i].umur;
                            gotoxy(71, 9);
                            cin >> pasien[i].alamat;
                            cout << endl << endl;
                        }
                        system("pause");
                    } else if (pilihan == 3) {
                        //Menampilkan List Pasien
                        if (dokter3 == "Mata") {
                            for (i = 1; i <= n; i++) {
                                cout << "\t \t \t \t \t \t"; cout << "=================================" << endl;
                                cout << "\t \t \t \t \t \t"; cout << "========DATA PASIEN Ke -" << i << "========" << endl;
                                cout << "\t \t \t \t \t \t"; cout << "=================================" << endl << endl;

                                cout << "\t \t \t \t \t \t"; cout << "Nama   : " << pasien[i].nama.namadepan << " " << pasien[i].nama.namabelakang << endl;
                                cout << "\t \t \t \t \t \t"; cout << "NIK    : " << nik << endl;
                                cout << "\t \t \t \t \t \t"; cout << "Umur   : " << pasien[i].umur << endl;
                                cout << "\t \t \t \t \t \t"; cout << "Dokter : " << dokter3 << endl;
                                cout << "\t \t \t \t \t \t"; cout << "Alamat : " << pasien[i].alamat << endl;
                                cout << "\t \t \t \t \t \t"; cout << "---------------------------------" << endl << endl;
                            }
                        }
                    } else {
                        cout << "Data tidak ditemukan";
                    } cout << "Kembali ke Menu (y/n)";
                      cin >> ulang;
        }

        else if (pilihan == 4){
                system("cls");

                gotoxy(40, 2); cout << "============= SEARCHINNG DATA =============" << endl <<endl;
                gotoxy(40, 4); cout << "1. Cari Pasien Berdasarkan NIK" << endl;
                gotoxy(40, 5); cout << "2. Cari Dokter dan Cek Jadwal Praktik" << endl;
                gotoxy(40, 6); cout << "Masukkan Pilihan : ";
                gotoxy(40, 7); cout << "===========================================" << endl << endl;
                gotoxy(60, 6);cin >> pilihan;

                system("cls");
                switch (pilihan){
                    case 1:
                        gotoxy(40, 2); cout << "========== PENCARIAN NIK =========" << endl << endl;
                        gotoxy(40, 4); cout << "Cari berdasarkan NIK" << endl;
                        gotoxy(40, 5); cout << "Masukkan NIK \t: ";
                        gotoxy(40, 6); cout << "==================================" << endl << endl;
                        gotoxy(40, 10); cout << "==================================" << endl << endl;
                        gotoxy(60, 5); cin >> nikk;
                        if (nikk == nik){
                            gotoxy(40, 8); cout << "Pasien dengan Nik " << nik << ", Ditemukan" << endl << endl << endl;
                        } else {
                            gotoxy(40, 8); cout << "Pasien dengan Nik " << nik << ", tidak ditemukan" << endl << endl << endl;
                        }
                        break;

                    case 2 :
                        int panjang = 6;
                        string key;
                        gotoxy(40, 2); cout << "==========PENCARIAN DOKTER DAN CEK JADWAL PRAKTIK==========" << endl <<endl;
                        string data[panjang]={ "", "Susilo", "Bambang", "Andreas", "Andrian", "Wina"};

                        gotoxy(40, 4); cout << "Cari Nama Dokter : ";
                        gotoxy(40, 6); cout << "==========================================================" << endl;
                        gotoxy(40, 10); cout << "==========================================================" << endl;
                        gotoxy(60,4); cin >> key;

                        int posisi = sequential_search(data, panjang, key);

                        if (posisi != -1){
                            gotoxy(40, 8); cout << "Dr. " << key << " ,saat ini terdaftar di RS. Modar Jaya" << endl << endl;
                        } else {
                            gotoxy(40, 8); cout << "Dr. " << key << " yang anda cari tidak ditemukan" << endl << endl;
                        } break;
                }system("pause");

                if (pilihan == 2){
                    system("cls");
                    int nohari;
                    string key;
                    gotoxy(40, 2); cout << "===== CEK PRAKTIK =====" << endl;
                    gotoxy(40, 4); cout << "Daftar Dokter" << endl;
                    gotoxy(40, 5); cout << "1. Dr. Susilo" << endl;
                    gotoxy(40, 6); cout << "2. Dr. Bambang" << endl;
                    gotoxy(40, 7); cout << "3. Dr. Andreas" << endl;
                    gotoxy(40, 8); cout << "4. Dr. Andrian" << endl;
                    gotoxy(40, 9); cout << "5. Dr. Wina" << endl;
                    gotoxy(40, 10); cout << "=======================" << endl;
                    gotoxy(40, 12); cout << "Masukkan No Hari (1(Senin) - 7(Minggu)) : ";
                    gotoxy(82, 12); cin >> nohari;

//========================================================================================================================================================================================================
                    switch (nohari){
                    case 1:
                        gotoxy(40, 14); cout << "Hari Senin" << endl;
                        gotoxy(40, 15); cout << "Masukkan Nama Dokter \t: ";
                        gotoxy(40, 16); cout << "=================================";
                        gotoxy(40, 18); cout << "======================================================";
                        gotoxy(66, 15); cin  >> key;
                        if (key == "Susilo" && "Andrian"){
                            gotoxy(40, 17); cout << "Dokter yang anda cari hari ini sedang membuka praktik" << endl;
                        } else if (key != "Susilo" && "Andrian" ) {
                             gotoxy(40, 17); cout << "Dokter tersebut sedang tidak membuka praktik untuk hari ini" << endl;
                        } break;

                    case 2:
                        gotoxy(40, 14); cout << "Hari Selasa" << endl;
                        gotoxy(40, 15); cout << "Masukkan Nama Dokter \t: ";
                        gotoxy(40, 16); cout << "=================================";
                        gotoxy(40, 18); cout << "======================================================";
                        gotoxy(66, 15); cin  >> key;
                        if (key == "Susilo" && "Andreas"){
                            gotoxy(40, 17); cout << "Dokter yang anda cari hari ini sedang membuka praktik" << endl;
                        } else if (key != "Susilo" && "Andreas") {
                             gotoxy(40, 17); cout << "Dokter tersebut sedang tidak membuka praktik untuk hari ini" << endl;
                        } break;

                    case 3:
                        gotoxy(40, 14); cout << "Hari Rabu" << endl;
                        gotoxy(40, 15); cout << "Masukkan Nama Dokter \t: ";
                        gotoxy(40, 16); cout << "=================================";
                        gotoxy(40, 18); cout << "======================================================";
                        gotoxy(66, 15); cin  >> key;
                        if (key == "Susilo" && "Andrian"){
                            gotoxy(40, 17); cout << "Dokter yang anda cari hari ini sedang membuka praktik" << endl;
                        } else if (key != "Susilo" && "Andrian") {
                             gotoxy(40, 17); cout << "Dokter tersebut sedang tidak membuka praktik untuk hari ini" << endl;
                        } break;

                    case 4:
                        gotoxy(40, 14); cout << "Hari Kamis" << endl;
                        gotoxy(40, 15); cout << "Masukkan Nama Dokter \t: ";
                        gotoxy(40, 16); cout << "=================================";
                        gotoxy(40, 18); cout << "======================================================";
                        gotoxy(66, 15); cin  >> key;
                        if (key == "Susilo" && "Andreas"){
                            gotoxy(40, 17); cout << "Dokter yang anda cari hari ini sedang membuka praktik" << endl;
                        } else if (key != "Susilo" && "Andreas") {
                             gotoxy(40, 17); cout << "Dokter tersebut sedang tidak membuka praktik untuk hari ini" << endl;
                        } break;

                    case 5:
                        gotoxy(40, 14); cout << "Hari Jumat" << endl;
                        gotoxy(40, 15); cout << "Masukkan Nama Dokter \t: ";
                        gotoxy(40, 16); cout << "=================================";
                        gotoxy(40, 18); cout << "======================================================";
                        cin  >> key;
                        if (key == "Bambang" && "Wina"){
                            gotoxy(40, 17); cout << "Dokter yang anda cari hari ini sedang membuka praktik" << endl;
                        } else if (key !="Bambang" && "Wina") {
                             gotoxy(40, 17); cout << "Dokter tersebut sedang tidak membuka praktik untuk hari ini" << endl;
                        } break;

                    case 6:
                        gotoxy(40, 14); cout << "Hari Sabtu" << endl;
                        gotoxy(40, 15); cout << "Masukkan Nama Dokter \t: ";
                        gotoxy(40, 16); cout << "=================================";
                        gotoxy(40, 18); cout << "======================================================";
                        gotoxy(66, 15); cin  >> key;
                        if (key == "Bambang" && "Andreas"){
                            gotoxy(40, 17); cout << "Dokter yang anda cari hari ini sedang membuka praktik" << endl;
                        } else if (key != "Bambang" && "Andreas") {
                             gotoxy(40, 17); cout << "Dokter tersebut sedang tidak membuka praktik untuk hari ini" << endl;
                        } break;

                    case 7:
                        gotoxy(40, 14); cout << "Hari Minggu" << endl;
                        gotoxy(40, 15); cout << "Masukkan Nama Dokter \t: ";
                        gotoxy(40, 16); cout << "=================================";
                        gotoxy(40, 18); cout << "======================================================";
                        gotoxy(66, 15); cin  >> key;
                        if (key == "Bambang"){
                            gotoxy(40, 17); cout << "Dokter yang anda cari hari ini sedang membuka praktik" << endl;
                        } else if (key != "Bambang") {
                             gotoxy(40, 17); cout << "Dokter tersebut sedang tidak membuka praktik untuk hari ini" << endl;
                        } break;

                    default:
                        cout << "Mohon Masukkan Data Yang Sesuai" << endl;
                        break;
                    }
//========================================================================================================================================================================================================
                cout << "Kembali ke Menu (y/n)";
                cin >> ulang;
            }
        }

        else if (pilihan == 5){
            system("cls");
            int length = 3;
            int a[length] = {1203, 354, 532};

            gotoxy(40,2); cout << "========== STATISTIK KUNJUNGAN TAHUN 2019 ==========" << endl << endl;
            gotoxy(35,4); cout << "1. Kunjungan Dokter Umum = 1203" << endl;
            gotoxy(35,5); cout << "2. Kunjungan Dokter Gigi = 354" << endl;
            gotoxy(35,6); cout << "3. Kunjungan Dokter Mata = 532"  << endl << endl;

            gotoxy(35,7); cout << "Data kunjungan terurut (Kunjungan Rendah - Tinggi) :" << endl;
            insertion_sort(a, length);
            gotoxy(35,8); print_array(a, length);
            gotoxy(30,11); cout << "Total Kunjungan Pasien Tahun 2019 ditambah dengan Kunjungan saat ini : " << 1203 + 354 + 532 + n << endl << endl;
            gotoxy(30,13); cout << "Dari Data diatas, Kami akan berusaha meningkatkan kualitas pelayanan ditahun ini" << endl << endl;
            gotoxy(29,14); cout << "==================================================================================" << endl;
            cout << "Kembali ke Menu (y/n)";
         cin >> ulang;
        }

         else{
            gotoxy(2, 20); cout << "=================================================== TERIMAKASIH ===================================================" << endl;
         }
    }while(ulang=="y" && pilihan !=0);
    return 0;
}

//PROGRAM BERAKHIR
