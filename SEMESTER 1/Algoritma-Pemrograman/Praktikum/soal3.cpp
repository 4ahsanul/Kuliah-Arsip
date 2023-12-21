#include <iostream>

using namespace std;

int main()
{
    // deklarasi variabel counter dengan tipe data integer yang bernilai 3
    int counter = 3;
    //  deklarasi array integer dengan panjang senilai counter
    int nilai[counter];
    //  deklarasi variabel max dengan tipe data integer
    int Max;

    //  perulangan dari 0 selama i kurang dari counter
    for(int i = 0; i < counter; i++){
        //  mencetak tulisan masukkan angka
        cout << "Masukkan angka : ";
        // input ke variabel nilai dengan indeks ke - i
        cin >> nilai[i];
        // jika i == 0 maka Max diisi dengan nilai indeks ke - 0
        if(i == 0) Max = nilai[0];

        // jika nilai indeks ke i lebih besar dari Max maka
        if(nilai[i] > Max){
            // Max diisi dengan nilai indeks ke i
            Max = nilai[i];
        }
    }

    // cetak nilai Max
    cout << "Nilai maksimum adalah " << Max << endl;

}
