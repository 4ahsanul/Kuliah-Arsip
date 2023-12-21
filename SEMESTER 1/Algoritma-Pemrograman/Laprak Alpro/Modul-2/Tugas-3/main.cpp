#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float bilangan; //variabel bilangan dengan tipe data float, karena kita akan menggunakan bilangan desimal atau akan ada floating point

        cout << "=====PROGRAM PAK ADI=====" << endl; //nama program
        cout << "Masukkan Bilangan \t: "; //untuk penjelas input
        cin >> bilangan; //meminta user menginput data bilangan desimal

        cout << setiosflags(ios::fixed); //kode yang berfungsi agar program tidak membulatkan angka atau bilangan
        cout << setprecision(2) << bilangan << endl; //untuk meengatur berapa angka dibelakang koma, disini diminta hanya ada 2 angka dibelakang koma, jadi di set 2

    return 0; //adalah untuk memberitahu kepada sistem operasi bahwa program telah berakhir
}
