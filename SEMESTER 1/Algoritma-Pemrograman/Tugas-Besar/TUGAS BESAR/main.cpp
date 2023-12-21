//Library
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

using namespace std;

//Prosedur Goto X & Y
void gotoxy(int x, int y){
    COORD k = {x, y};
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
char nik[16];
char umur[20];
char alamat[50];
char dokter[50];
};
datadiri pasien[10];

//Deklarasi Pendaftaran
int i,n;

int main(){
do{

system("cls");

    gotoxy(50, 1);cout << "======================" << endl;
    gotoxy(50, 2);cout << " RS. MODAR JAYA ABADI " << endl;
    gotoxy(50, 3);cout << "======================" << endl;

    cout << "1. Jadwal Praktik Dokter Umum" << endl;
    cout << "2. Jadwal Praktik Dokter Gigi" << endl;
    cout << "3. Jadwal Praktik Dokter Mata" << endl;
    cout << "4. Pencarian Pasien" << endl;
    cout << "5. Statistik Data Kunjungan Pasien" << endl;
    cout << "0. Keluar" << endl;
    cout << "Masukkan Pilihan : ";
    cin >> pilihan;

        if(pilihan == 1){
            system("cls");
            cout << "Daftar Menu Praktik Dokter Umum" << endl;
            cout << "1. Jadwal Praktik" << endl;
            cout << "2. Mendaftar Antrian" << endl;
            cout << "3. Daftar Antrian" << endl;
            cout << "Masukan pilihan anda : ";
            cin >> pilihan;
            system("cls");

        switch (pilihan){
        case 1:
        gotoxy(50, 1); cout << "========== JADWAL PRAKTIK DOKTER UMUM =========" << endl;
        gotoxy(0, 3);  cout << "------------------------------------------" << endl;
        //Tabel Judul
        gotoxy(0, 4);  cout << "|";
        gotoxy(2, 4);  cout << " Hari   |";
        gotoxy(17, 4); cout << "Jam      |";
        gotoxy(29, 4); cout << "Nama Dokter |";
        //Akhir dari Hari
        gotoxy(0, 5);  cout << "+----------------------------------------+";
        gotoxy(0, 6);  cout << "| Senin   | 08.00 - 15.00 |  Dr. Susilo  |";
        gotoxy(0, 7);  cout << "+----------------------------------------+";
        gotoxy(0, 8);  cout << "| Selasa  | 08.00 - 15.00 |  Dr. Susilo  |";
        gotoxy(0, 9);  cout << "+----------------------------------------+";
        gotoxy(0, 10); cout << "| Rabu    | 08.00 - 15.00 |  Dr. Susilo  |";
        gotoxy(0, 11); cout << "+----------------------------------------+";
        gotoxy(0, 12); cout << "| Kamis   | 08.00 - 15.00 |  Dr. Susilo  |";
        gotoxy(0, 13); cout << "+----------------------------------------+";
        gotoxy(0, 14); cout << "| Jumat   | 08.00 - 15.00 |  Dr. Bambang |";
        gotoxy(0, 15); cout << "+----------------------------------------+";
        gotoxy(0, 16); cout << "| Sabtu   | 08.00 - 15.00 |  Dr. Bambang |";
        gotoxy(0, 17); cout << "+----------------------------------------+";
        gotoxy(0, 18); cout << "| Minggu  | 08.00 - 15.00 |  Dr. Bambang |";
        gotoxy(0, 19); cout << "+----------------------------------------+" << endl << endl;
        break;

        case 2:
            cout << "========== PENDAFTARAN PASIEN ==========" << endl << endl;
            cout << "Masukkan banyak data : ";
            cin >> n;
            cout << "DATA PENDAFTAR :"<<endl;

        for (i=1; i<=n; i++) {
        system("cls");
            gotoxy(50,1); cout << "========== DAFTAR PASIEN ==========" << endl << endl;
            gotoxy(1,3); cout << "Data Pasien Ke- "<<i<<endl;
            gotoxy(1,4); cout << "Masukkan Nama Depan         : ";
            gotoxy(1,5); cout << "Masukkan Nama Belakang      : ";
            gotoxy(1,6); cout << "Masukkan NIK                : ";
            gotoxy(1,7); cout << "Masukkan Umur               : ";
            gotoxy(1,8); cout << "Masukkan Praktik Dokter     : ";
            gotoxy(1,9); cout << "Masukkan Alamat             : ";

            gotoxy(31,4); cin >> pasien[i].nama.namadepan;
            gotoxy(31,5); cin >> pasien[i].nama.namabelakang;
            gotoxy(31,6); cin >> pasien[i].nik;
            gotoxy(31,7); cin >> pasien[i].umur;
            gotoxy(31,8); cin >> pasien[i].dokter;
            gotoxy(31,9); cin >> pasien[i].alamat;
            } system("pause");
            break;

        case 3:
            //Menampilkan List Pasien
            if (pasien[i].dokter == "Umum"|| pasien[i].dokter == "umum"){
                for (i=1; i<=n; i++){
                cout << "=================================" << endl;
                cout << "=====DATA PASIEN Ke -" << i << "=====" << endl;
                cout << "=================================" << endl << endl;

                cout << "Nama : " << pasien[i].nama.namadepan << " " << pasien[i].nama.namabelakang << endl;
                cout << "NIK : " << pasien[i].nik << endl;
                cout << "Umur : " << pasien[i].umur << endl;
                cout << "Dokter : " << pasien[i].dokter << endl;
                cout << "Alamat : " << pasien[i].alamat << endl;
                cout << "---------------------------------" << endl << endl;
                }
                break;
            } else {
                cout << "Kosong";
            }
        }
        cout << "Kembali ke Menu (y/n)"; cin >> ulang;
    }

        if(pilihan == 2){
            system("cls");
            cout << "Daftar Menu Praktik Dokter Gigi" << endl;
            cout << "1. Jadwal Praktik" << endl;
            cout << "2. Mendaftar Antrian" << endl;
            cout << "3. Daftar Antrian" << endl;
            cout << "Masukan pilihan anda : ";
            cin >> pilihan;
            system("cls");

        switch (pilihan){
        case 1:
        gotoxy(50, 1); cout << "========== JADWAL PRAKTIK DOKTER GIGI =========" << endl;
        gotoxy(0, 3);  cout << "------------------------------------------" << endl;
        //Tabel Judul
        gotoxy(0, 4);  cout << "|";
        gotoxy(2, 4);  cout << " Hari   |";
        gotoxy(17, 4); cout << "Jam      |";
        gotoxy(29, 4); cout << "Nama Dokter |";
        //Akhir dari Hari
        gotoxy(0, 5);  cout << "+----------------------------------------+";
        gotoxy(0, 6);  cout << "| Senin   |       -       |       -      |";
        gotoxy(0, 7);  cout << "+----------------------------------------+";
        gotoxy(0, 8);  cout << "| Selasa  | 09.00 - 14.00 |  Dr. Andreas |";
        gotoxy(0, 9);  cout << "+----------------------------------------+";
        gotoxy(0, 10); cout << "| Rabu    |       -       |       -      |";
        gotoxy(0, 11); cout << "+----------------------------------------+";
        gotoxy(0, 12); cout << "| Kamis   | 09.00 - 14.00 |  Dr. Andreas |";
        gotoxy(0, 13); cout << "+----------------------------------------+";
        gotoxy(0, 14); cout << "| Jumat   |       -       |       -      |";
        gotoxy(0, 15); cout << "+----------------------------------------+";
        gotoxy(0, 16); cout << "| Sabtu   | 09.00 - 14.00 |  Dr. Andreas |";
        gotoxy(0, 17); cout << "+----------------------------------------+";
        gotoxy(0, 18); cout << "| Minggu  |       -       |       -      |";
        gotoxy(0, 19); cout << "+----------------------------------------+" << endl << endl;
        break;

        case 2:
            cout << "========== PENDAFTARAN PASIEN ==========" << endl << endl;
            cout << "Masukkan banyak data : ";
            cin >> n;
            cout << "DATA PENDAFTAR :"<<endl;

        for (i=1; i<=n; i++) {
        system("cls");
            gotoxy(50,1); cout << "========== DAFTAR PASIEN ==========" << endl << endl;
            gotoxy(1,3); cout << "Data Pasien Ke- "<<i<<endl;
            gotoxy(1,4); cout << "Masukkan Nama Depan         : ";
            gotoxy(1,5); cout << "Masukkan Nama Belakang      : ";
            gotoxy(1,6); cout << "Masukkan NIK                : ";
            gotoxy(1,7); cout << "Masukkan Umur               : ";
            gotoxy(1,8); cout << "Masukkan Praktik Dokter     : ";
            gotoxy(1,9); cout << "Masukkan Alamat             : ";

            gotoxy(31,4); cin >> pasien[i].nama.namadepan;
            gotoxy(31,5); cin >> pasien[i].nama.namabelakang;
            gotoxy(31,6); cin >> pasien[i].nik;
            gotoxy(31,7); cin >> pasien[i].umur;
            gotoxy(31,8); cin >> pasien[i].dokter;
            gotoxy(31,9); cin >> pasien[i].alamat;
            } system("pause");
            break;

        case 3:
            //Menampilkan List Pasien
            if (pasien[i].dokter == "Gigi" || pasien[i].dokter == "gigi"){
                for (i=1; i<=n; i++){
                cout << "=================================" << endl;
                cout << "=====DATA PASIEN Ke -" << i << "=====" << endl;
                cout << "=================================" << endl << endl;

                cout << "Nama : " << pasien[i].nama.namadepan << " " << pasien[i].nama.namabelakang << endl;
                cout << "NIK : " << pasien[i].nik << endl;
                cout << "Umur : " << pasien[i].umur << endl;
                cout << "Dokter : " << pasien[i].dokter << endl;
                cout << "Alamat : " << pasien[i].alamat << endl;
                cout << "---------------------------------" << endl << endl;
                }
                break;
            } else {
                cout << "TIDAK ADA PRAKTIK" << endl;
            }
        }
        cout << "Kembali ke Menu (y/n)"; cin >> ulang;
    }

        if(pilihan == 3){
            system("cls");
            cout << "Daftar Menu Praktik Dokter Mata" << endl;
            cout << "1. Jadwal Praktik" << endl;
            cout << "2. Mendaftar Antrian" << endl;
            cout << "3. Daftar Antrian" << endl;
            cout << "Masukan pilihan anda : ";
            cin >> pilihan;
            system("cls");

        switch (pilihan){
        case 1:
        gotoxy(50, 1); cout << "========== JADWAL PRAKTIK DOKTER MATA =========" << endl;
        gotoxy(0, 3);  cout << "------------------------------------------" << endl;
        //Tabel Judul
        gotoxy(0, 4);  cout << "|";
        gotoxy(2, 4);  cout << " Hari   |";
        gotoxy(17, 4); cout << "Jam      |";
        gotoxy(29, 4); cout << "Nama Dokter |";
        //Akhir dari Hari
        gotoxy(0, 5);  cout << "+----------------------------------------+";
        gotoxy(0, 6);  cout << "| Senin   | 10.00 - 15.00 |  Dr. Andrian |";
        gotoxy(0, 7);  cout << "+----------------------------------------+";
        gotoxy(0, 8);  cout << "| Selasa  |       -       |       -      |";
        gotoxy(0, 9);  cout << "+----------------------------------------+";
        gotoxy(0, 10); cout << "| Rabu    | 10.00 - 15.00 |  Dr. Andrian |";
        gotoxy(0, 11); cout << "+----------------------------------------+";
        gotoxy(0, 12); cout << "| Kamis   |       -       |       -      |";
        gotoxy(0, 13); cout << "+----------------------------------------+";
        gotoxy(0, 14); cout << "| Jumat   | 10.00 - 15.00 |  Dr. Wina    |";
        gotoxy(0, 15); cout << "+----------------------------------------+";
        gotoxy(0, 16); cout << "| Sabtu   |       -       |       -      |";
        gotoxy(0, 17); cout << "+----------------------------------------+";
        gotoxy(0, 18); cout << "| Minggu  |       -       |       -      |";
        gotoxy(0, 19); cout << "+----------------------------------------+" << endl << endl;
        break;

        case 2:
            cout << "========== PENDAFTARAN PASIEN ==========" << endl << endl;
            cout << "Masukkan banyak data : ";
            cin >> n;
            cout << "DATA PENDAFTAR :"<<endl;

        for (i=1; i<=n; i++) {
        system("cls");
            gotoxy(50,1); cout << "========== DAFTAR PASIEN ==========" << endl << endl;
            gotoxy(1,3); cout << "Data Pasien Ke- "<<i<<endl;
            gotoxy(1,4); cout << "Masukkan Nama Depan         : ";
            gotoxy(1,5); cout << "Masukkan Nama Belakang      : ";
            gotoxy(1,6); cout << "Masukkan NIK                : ";
            gotoxy(1,7); cout << "Masukkan Umur               : ";
            gotoxy(1,8); cout << "Masukkan Praktik Dokter     : ";
            gotoxy(1,9); cout << "Masukkan Alamat             : ";

            gotoxy(31,4); cin >> pasien[i].nama.namadepan;
            gotoxy(31,5); cin >> pasien[i].nama.namabelakang;
            gotoxy(31,6); cin >> pasien[i].nik;
            gotoxy(31,7); cin >> pasien[i].umur;
            gotoxy(31,8); cin >> pasien[i].dokter;
            gotoxy(31,9); cin >> pasien[i].alamat;
            } system("pause");
            break;

        case 3:
        //Menampilkan List Pasien
        if (pasien[i].dokter == "Mata" || pasien[i].dokter == "mata"){
            for (i=1; i<=n; i++){
                cout << "=================================" << endl;
                cout << "=====DATA PASIEN Ke -" << i << "=====" << endl;
                cout << "=================================" << endl << endl;

                cout << "Nama : " << pasien[i].nama.namadepan << " " << pasien[i].nama.namabelakang << endl;
                cout << "NIK : " << pasien[i].nik << endl;
                cout << "Umur : " << pasien[i].umur << endl;
                cout << "Dokter : " << pasien[i].dokter << endl;
                cout << "Alamat : " << pasien[i].alamat << endl;
                cout << "---------------------------------" << endl << endl;
                }
                break;
            } else {
                cout << "TIDAK ADA PRAKTIK";
                }
            }
            cout << "Kembali ke Menu (y/n)"; cin >> ulang;
        }

    } while(ulang=="y" && pilihan !=0);
return 0;
}
