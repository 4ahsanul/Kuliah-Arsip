#include <iostream>
using namespace std;

int main(){
    int input, i;

    cout << "=====PROGRAM MENGHITUNG HASIL TOTAL BILANGAN=====" << endl;

    cout << "Masukkan Angka \t: "; //Cout untuk menampilkan pesan untuk memerintahkan User memasukkan angka
    cin >> input; //User disini dapat menginput bilangan

    cout << "Hasil Total \t: "; //Cout tampilan pesan Hasil Total
    int hasil=0;

    for(i=1; input>=i; input--){ //Baris disini untuk memulai instruksi dari mana program akan dimulai, diproses, dan bagaimana berakhirnya program tsb.

        hasil+=input;

        //if berfungsi untuk mengecek peryataan yang dimasukkan atau membandingkan pernyataan yang dimasukkan oleh User
        if (input!=i) //Jika user memasukkan angka tidak sama dengan variabel i maka akan dijalankan bagian ini oleh program
        {
            cout << input << " + ";

          }else{ //else untuk menerima nilai jika perytaan if yang telah dimasukkan tadi tidak sesuai, maka program akan masuk ke pernyataan ini
            cout << input;
            }
    }

    cout << " = " << hasil;
    return 0;
}
