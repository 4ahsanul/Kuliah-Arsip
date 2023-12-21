#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float hasil, a, b; //Tipe data float karena akan menggunakan bilangan desimal

    cout <<"==========PROGRAM PEMBAGIAN==========" << endl; //Nama Program
    cout << "Masukkan bilangan yang akan dibagi \t: "; //User diperintahkan untuk memasukkan bilangan yang akan dibagi
    cin >> a; //User memasukan bilangan

    cout << "Masukkan bilangan pembagi \t: "; //User diperintahkan untuk memasukkan bilangan yang akan pembagi
    cin >> b; //User memasukkan pembagi

    hasil = a/b; //Hasil nya akan diproses sebagai a dibagi b

    if (a !=0 && b !=0) { //Bagian logika, yaitu not dan and dimana a dan b tidak boleh 0, dan "and" dimana keduanya memiliki nilai yang sama yang berarti akan mendapat "T/True"
        cout << setiosflags(ios::fixed) << endl; //Agar bilangan dibelakang koma tidak bidulatkan oleh program
        cout << setprecision(2) << a / b; //Untuk menampilkan berapa angka atau bilangan dibelakang koma
        cout << "\n Hasil bagi \t: " << a / b; //Akan memunculkan hasil pembagian dari a/b
        } else {
        cout << "Bilangan tidak boleh 0"; //Jika user memasukkan bilangan 0, maka baris program ini akan teroutput
        }
}
