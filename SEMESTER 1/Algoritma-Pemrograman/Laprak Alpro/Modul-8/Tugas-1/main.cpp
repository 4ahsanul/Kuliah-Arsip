//NamaProgram: SearchingPlatNomer
#include <iostream>

using namespace std;

//Fungsi sequential search
//Pencarian ini melakukan pengulangan dari 1 sampai dengan jumlah data. Pada setiap perulangan , di bandingkan data key dengan yang dicari. Apabila sama, berarti data telah ditemukan.
//Sebaliknya apabila sampai akhir pengulangan , tidak ada yang sama berarti data tidak ada.
//Pada status ini, data tidak ditemukan
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
    return posisi; //Pengembalian nilai posisi, pada fungsi sequential search
}
int main(){
    int panjang = 10; //Panjang dari data, yang mempunyai nilai 10

    cout << "==========PROGRAM SEARCHING PLAT NOMER==========" << endl <<endl;
    string data[panjang]={ "R 300 SR", "R 1234 DJ", "R 3218 RR",  "R 701 LP", "R 007 TU", "R 3 ST", "R 999 RT", "R 210 RO", "R 1111 II", "R 4987 LH"}; //Isi dari data
    string key = "R 999 RS"; //Key atau Kata Kunci yang ingin dicari pada data[panjang] diatas

    int posisi = sequential_search(data, panjang, key); //Program melakukan search dari key diatas

    if (posisi != -1){ //Kemudian melakukan percabangan, apakah data ditemukan atau tidak
        cout << "Plat " << key << " yang anda cari ditemukan di indeks ke-" << posisi << endl;
    } else {
        cout << "Plat " << key << " yang anda cari tidak ditemukan" << endl;
    }
    return 0;
}
