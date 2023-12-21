#include <iostream>
using namespace std;
int main()
{
    int i, hasil, bil1, bil2;
    hasil=1;

    cout << "=====PROGRAM MENGHITUNG HASIL PANGKAT====" << endl;
    cout << "Masukkan bilangan \t: " ; //---------------|
    cin >> bil1; //User dapat menginput bilangan     |--> Menampilkan pesan perintah untuk User memasukkan bilangan
    cout << "Masukkan pangkat \t: " ; //---------------|
    cin >> bil2; //User dapat menginput bilangan

    for (i=1; i<=bil2;i++){ //Baris disini untuk memulai instruksi dari mana program akan dimulai, diproses, dan bagaimana berakhirnya program tsb. Disitu ada increment yang brfungsi untuk menambah nilai variabel sebanyak 1 angka
        hasil = hasil*bil1; //Proses instruksi hasilnya akab diproses disini
    }
    cout << "Hasil pangkat \t: " << hasil; //Output hasil
    cout << endl;

    return 0;
}
