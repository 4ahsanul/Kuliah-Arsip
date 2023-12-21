//NamaProgram: KALKULATOR

//Library
#include <iostream>                                                                                                                                                                                                                                                                                                                                                       //Tugas oleh 19102143
#include <conio.h>
#include <windows.h>
#include <iomanip>

using namespace std;

//Fungsi penjumlahan
int penjumlahan (int a, int b){
    int hasil;
    hasil = a+b;
return hasil;
}

//Fungsi pengurangan
int pengurangan (int a, int b){
    int hasil;
    hasil = a-b;
return hasil;
}

//Fungsi perkalian
int perkalian (int a, int b){
    int hasil;
    hasil = a*b;
return hasil;
}

//Fungsi perkalian
float pembagian (float a, float b){
    float hasil;
    hasil = a/b;
return hasil;
}

//Fungsi perpangkatan
int perpangkat (int a, int b){
    int pangkat=1;
    for (int i=1; i<=b; i++)
        pangkat = pangkat*a;
return pangkat;
}


int main(){
int pilihan;
string ulang;
    do{ //Untuk melakukan perulangan program
    system("cls"); // Untuk mengcleaar setiap setelah memilih menu
        cout << "==========KALKULATOR==========" << endl << endl; //Nama menu
        //Menu yang dapat dipilih
        cout << "1.Penjumlahan" << endl;
        cout << "2.Pengurangan" << endl;
        cout << "3.Perkalian" << endl;
        cout << "4.Pembagian" << endl;
        cout << "5.Pangkat" << endl;
        cout << "0.Tutup Program" << endl;
        cout << "Masukan Pilihan \t: ";
        cin >> pilihan;

        //Jika user memilih pilihan no 1
        if (pilihan == 1){
                int bil1, bil2;
                cout << "=====Penjumlahan=====" << endl;
                cout << "Masukan bilangan 1 \t: ";
                cin >> bil1;
                cout << "Masukan bilangan 2 \t: ";
                cin >> bil2;
                cout << "Hasilnya adalah \t: " << penjumlahan(bil1, bil2); // Pemanggilan funsgi penjumlahan
                cout << endl;
                cout << "Kembali ke Menu (y/n)"; cin >> ulang;
            }

        //Jika user memilih pilihan no 2
        else if (pilihan == 2){
                int bil1, bil2;
                cout << "=====Pengurangan=====" << endl;
                cout << "Masukan bilangan 1 \t: ";
                cin >> bil1;
                cout << "Masukan bilangan 2 \t: ";
                cin >> bil2;
                cout << "Hasilnya adalah \t: " << pengurangan(bil1, bil2); // Pemanggilan fungsi pengurangan
                cout << endl;
                cout << "Kembali ke Menu (y/n)"; cin >> ulang;

        }

        //Jika user memilih pilihan no 3
        else if (pilihan == 3){
                int bil1, bil2;
                cout << "=====Perkalian=====" << endl;
                cout << "Masukan bilangan 1 \t: ";
                cin >> bil1;
                cout << "Masukan bilangan 2 \t: ";
                cin >> bil2;
                cout << "Hasilnya adalah \t: " << perkalian(bil1, bil2); // Pemanggilan fungsi perkalian
                cout << endl;
                cout << "Kembali ke Menu (y/n)"; cin >> ulang;
        }

        //Jika user memilih pilihan no 4
        else if (pilihan == 4){
                int bil1, bil2;
                cout << "=====Pembagian=====" << endl;
                cout << "Masukan bilangan 1 \t: ";
                cin >> bil1;
                cout << "Masukan bilangan 2 \t: ";
                cin >> bil2;
                cout << "Hasilnya adalah \t: " << pembagian(bil1, bil2); // Pemanggilan fungsi perkalian
                cout << endl;
                cout << "Kembali ke Menu (y/n)"; cin >> ulang;
        }

        //Jika user memilih pilihan no 5
        else if (pilihan == 5){
                float bil1, bil2; // Menggunakan float karena pembagian terdapat bilangan desimat
                cout << "=====Perpangkatan=====" << endl;
                cout << "Masukan bilangan \t\t: ";
                cin >> bil1;
                cout << "Masukan bilangan pencacah \t: ";
                cin >> bil2;
                cout << "Hasilnya adalah \t: " << perpangkat(bil1, bil2); // Pemanggilan fungsi perpangkatan
                cout << endl;
                cout << "Kembali ke Menu (y/n)"; cin >> ulang;
        }

        //Jika user memilih pilihan 0
        else if (pilihan == 0){
            cout << "Terimakasih telah menggunakan program ini" << endl;
        }

        //Jika user tidak memasukkan data dengan benar
        else {
                cout << "Mohon Masukan Data yang benar" << endl;
        }

    }while (ulang=="y"&&pilihan!=0); // Akan terus diulang sampai user memasukkan pilihan 0 atau n
return 0; // Program berhenti
}
