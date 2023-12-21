//NamaProgram: MencariNimMahasiswa
#include <iostream>

using namespace std;

//Fungsi Binary Search
//Untuk melakukan binary seacrh, ada syarat yang harus dipenuhi, yaitu data harus terurut, jika data belum terurut maka, Binary search tidak dapat dilakukan
//Binary search melakukan pembagian pada data yang tersedia, kemudian membagiya lagi sampai data tersebut ditemukan atau tidak
int binery(int data[], int panjang, int key){
    int atas, bawah, tengah, posisi;
    bool ada;

    ada = false;
    bawah = 0;
    atas = panjang - 1;
    posisi = -1;
    while (bawah <= atas){
        tengah = (atas + bawah)/2;
        if (key == data[tengah]) {
            posisi = tengah;
            break;
        } else if (key < data[tengah]) {
            atas = tengah - 1;
        } else if (key > data[tengah]) {
            bawah = tengah + 1;
        }
    }
    return posisi; //Pengembalian nilai posisi, pada fungsi binary search
}
int main(){
    int panjang = 13; //Panjang dari data
    cout << "==========PENCARIAN NIM MAHASISWA==========" << endl << endl;
    int data[panjang]={12102001, 12102002, 12102003, 12102004, 12102005, 12102006, 12102007, 12102008, 12102009, 12102010, 12102011, 12102012, 12102013}; //Isi dari data yang mempunyai panjang 13
    int key = 12102011; //Kata Kunci untuk melakukan pencarian

    int posisi = binery(data, panjang, key); //Melakukan searching

    if (posisi != -1){ //Melakukan percabangan kondsi, apakah data ditemukan atau tidak
        cout << "Nim " << key << " yang anda cari ditemukan di indeks ke-" << posisi << endl;
    } else {
        cout << "Nim " << key << " yang anda cari tidak ditemukan" << endl;
    }
    return 0;
}
