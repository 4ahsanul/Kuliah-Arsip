//Nama Program: Mencari indeks pada Array

#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;
int A[10] = {5,22,14,87,20,54,7,3,24,34}; // Vaariable yang hanya dikenali oleh sebuah fungsi/prosedur
int bil, c;                               // saja (hanya dikenali pada fungsi/prosedur tempat variable tersebut dideklarasikan).

void cari (int bil) { // Void adalah sebuah fungsi yang tidak mengembalikan nilai keluaran yang didapat dari hasil proses tersebut
    for (c = 0; c < 10; c++){ // Disini juga ada instruksi untuk mencari bilangan yang dinputkan oleh user, apakah ada di indeks atau tidak
    if (A[c] == bil)
    {
    cout << "Bilangan yang anda cari berada di indeks ke - " << c << endl;
    break;
    }
 }
}

int main(){
    cout << "=====Program Pengecek Array=====" << endl << endl;
    cout << "========== DAFTAR INDEKS ==========" << endl;
    for (int i = 0; i < 10; i++){ //Instruksi pengulangan untuk menampilkan indeks dan array yang telah ditetapkan diatas yaitu baris ke 7
    cout << "Indeks - [" << i << "]" << " " << A[i] << endl;
    }
    cout << endl; // Jika bilangan yang dimasukan ada dalam indeks array maka akan menampilkan output ini
    cout << "Masukan bilangan yang akan dicari : ";
    cin >> bil;

    cari (bil); // Mencari bilangan

    if (A[c] != bil){ // Instruksi jika bilangan yang dimasukkan tidak terdapat pada indeks array, maka akan mengluarkan output berikut
    cout << "Bilangan yang anda cari tidak terdaftar " << endl;
        }
return 0; // Protgram berakhir
}
