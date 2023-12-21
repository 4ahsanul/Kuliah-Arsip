//NamaProgram: PencarianAngka
#include <iostream>

using namespace std;

//Fungsi Binary Search
//Untuk melakukan binary seacrh, ada syarat yang harus dipenuhi, yaitu data harus terurut, jika data belum terurut maka, Binary search tidak dapat dilakukan
//Binary search melakukan pembagian pada data yang tersedia, kemudian membagiya lagi sampai data tersebut ditemukan atau tidak
int binary(int data[], int panjang, int key){
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
    return posisi; //Pengembalian nilai posisi pada fungsi binary search
}

int main(){
    int panjang = 10; //Banyaknya/panjang dari data

    cout << "=-=-=-=-=-PENCARIAN ANGKA-=-=-=-=-=" << endl << endl;
    int data[panjang]={21, 28, 37, 44, 52, 61, 68, 72, 75, 75}; //Isi dari data yang seharusnya diurutkan, tetapi karena key adalah 71 dan tidak ada data didalam indkes, jadi tidak diurutkan
    int key = 71; //Kata Kunci yang dicari pada data diatas

    int posisi = binary(data, panjang, key); //Melakukan binary search

    if (posisi != -1){ //Perkondisian, apakah data ditemukan atau tidak
        cout << "Angka " << key << " yang anda cari ditemukan di indeks ke-" << posisi << endl;
    } else {
        cout << "Angka " << key << " yang anda cari tidak ditemukan" << endl;
    }
    return 0;
}
