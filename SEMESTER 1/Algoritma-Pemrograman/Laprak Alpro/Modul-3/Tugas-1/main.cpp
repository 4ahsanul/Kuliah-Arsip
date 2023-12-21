#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    string huruf;
    string hurufvokal ("AIUEO");

    cout << "=====PENGECEKAN HURUF VOKAL DAN KONSONAN=====" << endl << endl; //Nama program
    cout << "Masukkan Huruf \t: "; //User diperintahkan untuk memasukkan huruf
    cin >> huruf; //User mengitput huruf

    transform(huruf.begin(), huruf.end(), huruf.begin(), ::toupper); //Untuk menguppercase (membuat huruf yang user input menjadi kapital).

    //Catatan :"npos" sebagai pengembalian "return" suatu nilai yang mengindikasikan ketidak cocokan, pada program ini npos digunakan untuk membaca string huruf baris 9
    //Disini program akan mengecek atau membaca apakah variabel huruf vokal ada didalam string yang ada baris ke 9, yang akan memiliki 2 kemungkinan alur
    if (hurufvokal.find(huruf) != string::npos) { //Jika huruf yang diinputkan user terdapat di string ("AIUEO") yaitu vokal, maka program baris ini yang akan teroutput, selain itu juga ada operator !not, yang mengartikan akan ada kecocokan nanti data nanti pda baris ke 9
    cout << huruf << " adalah huruf Vokal"; //Huruf yang user input akan teroutput disini
    }
    if (hurufvokal.find(huruf) == string::npos) { //Jika huruf yang diinputkan user tidak terdapat di string ("AIUEO") alias huruf konsonan, maka program baris ini yang akan teroutput, selain itu juga ada operator =="true", yang mengartikan akan ada ketidakcocokan data pada baris ke 9
    cout << huruf << " adalah huruf Konsonan"; //Huruf yang user input akan teroutput disini
    }

return 0; //Program berakhir


}
