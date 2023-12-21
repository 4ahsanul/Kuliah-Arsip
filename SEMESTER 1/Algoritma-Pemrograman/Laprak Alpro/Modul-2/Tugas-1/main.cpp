#include <iostream>
using namespace std;

int main(){
    int bilangan; //variabel bilangan dengan tipe data int, karena disini saya menggunakan bilangan bulat
    char karakter; //variabel karakter dengan tipe data char, karena akan diisi oleh karakter-karakter
    string kata; //variabel kata dengan tipe data string, karena tipe data string dapat menampung banyak karakter sekaligus

        cout << "Inputkan bilangan \t: "; //output yang akan menampilkan kalimat tsb
        cin >> bilangan; //disini user diminta memasukkan bilangan
        cout << "Inputkan karakter \t: "; //output yang sama seperti kalimat tadi
        cin >> karakter; //user diminta memasukkan karakter
        cout << "Inputkan kata \t: "; //masih sama dengan cout diatas
        cin >> kata; //user diminta kembali memasukkan kata

    cout << endl << "Data yang Anda inputkan adalah \t: " << endl; //sebagai pemasnis, untuk data yang akan di outputan nantinya
    cout << bilangan << endl; //akan mengoutputkan bilangan yang telah user input dibaris no 10
    cout << karakter << endl; //akan mengoutputkan karakter yang telah user input di baris 12
    cout << kata << endl; //akan mengoutputkan kata yang telah user input di baris 14
return 0; //untuk memberitahu kepada sistem operasi bahwa program telah berakhir, dengan status 0
}
