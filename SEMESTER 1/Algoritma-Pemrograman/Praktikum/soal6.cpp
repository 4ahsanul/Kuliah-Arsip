#include <iostream>

using namespace std;

int main()
{
    /*
        Program untuk mencari ratusan, puluhan dan satuan
    */


    // deklarasi variabel bilangan dan sisa dengan tipe data integer
    int bilangan, sisa;

    // mencetak tulisan
    cout << "Masukkan angka [1...999] : ";
    //  input ke variabel bilangan
    cin >> bilangan;

    // jika bilangan lebih dari 999 maka
    if (bilangan > 999) {
        // mencetak tulisan
        cout << "Error, dibilang kurang dari 1000" << endl;
    // jika tidak
    } else {
        // sisa diisi dengan bilangan dibagi 100, jika bilangan bernilai 476, maka sisa akan bernilai 4
        //  karena 476 dibagi 100 adalah 4 (bilangan bulat, tanpa koma, karena tipe data bilangan bernilai int)
        sisa = bilangan / 100;
        // mencetak tulisan dan variabel sisa
        cout << "Memiliki " << sisa << " ratusan" << endl;
        //  bilangan diisi dengan hasil dari bilangan mod 100, jika bilangan bernila 476 maka sisa bilangan akan
        //   bernilai 476 (sisa hasil bagi)
        //  bilangan akan diisi dengan hasil dari bilangan mod 100
        bilangan = bilangan % 100;

        // sisa diisi dengan hasil dari bilangan dibagi 10
        sisa = bilangan / 10;
        // mencetak tulisan dan variabel sisa
        cout << "Memiliki " << sisa << " puluhan" << endl;;

        // bilangan akan diisi dengan hasil dari bilangan mod 10
        bilangan = bilangan % 10;
        // mencetak tulisan dan variabel bilangan
        cout << "Memiliki " << bilangan << " satuan" << endl;;

    }

    cout << endl;
    return 0;
}
