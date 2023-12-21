//Program Menentukan Bilangan Ganjil dari Inputan yang dimasukkan oleh User
#include <iostream>
using namespace std;

int main (){
    int Array[5];
    int i;

    cout << "============SELAMAT DATANG============" << endl << endl;
    cout << "=====Program Menentukan Bilangan Ganjil=====" << endl;
    for(i=0; i<5; i++){ //Instruksi pengulangan, i dimulai dari 0, karena array dimulai dari 0
    cout << "Masukan bilangan ke-" << i+1 << " = "; // Instruksi pengulangan untuk menginput bilangan
    cin >> Array[i]; } // Untuk mengitput data angka yang angka menjadi array
    cout << endl;

    cout << "=====Bilangan yang diinputkan User=====" << endl; //Inputan yang telah dimasukkan user akan ditamppilkan kembali
    for(i=0;i<5;i++){ // Instruksi tetap ada untuk membuat batas nilai tetap berada di 5
    cout << "Bilangan ke-" << i+1 << " = "<<Array[i]<<endl;} // Untuk memnampilkan nilai ke- yang telah diinputkan user

    cout << "Bilangan ganjilnya adalah = "; // Disini hasil dari aritmatika pembagian ganjil yaitu array tidak habis dibagi 2, maka akan ditampilkan sebagai nilai ganjil
    for(i=0; i<5; i++){
    if(Array[i]%2!=0){ // Untuk instruksi aritmatika jika array tidak habis dibagi 2 yaitu !=0 maka ia akan ditampilkan di Bilangan Ganjil
                       // Untuk istruksi aritmatika genap tidak ditulis pada baris kode, karena diminta untuk menampilkan Bilangan Ganjil saja, maka Genap dikosongkan
    cout << Array[i] << " "; } // Mengoutput Array yang telah dilakukan proses isntruksi diatas
    }
    cout << endl << endl;
    cout << "Terimakasih telah menggunakan program ini" << endl;
    cout << endl;
return 0; // Program Berakhir
}
