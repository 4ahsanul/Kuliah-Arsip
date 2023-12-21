//NamaProgram: SeleksiGanjilGenap
#include <iostream>

using namespace std;
int program_gj(int angka){ // Fungsi program_gj (ganjil genap)
    if (angka%2==0) // Didalam if ada instruksi untuk menentukan bilangn yang akan dimasukan nanti apakah termasuk genap atau ganjil
        cout << "Bilangan yang anda masukan termasuk bilangan genap";
    else
        cout << "Bilangan yang anda masukan termasuk bilangan ganjil";
        cout << endl;
return angka; // Untuk mengembalikan nilai kepada program_gj
}

int main(){
    int angka;
    cout << "==========PROGRAM SELEKSI GANJIL GENAP==========" << endl << endl;
    cout << "Masukan Bilangan \t: ";
    cin >> angka; // Inpuutan angka dari user yang akan diproses di fungsi seleksi ganjil genap
    cout << "------------------------------------------------" << endl;

    program_gj(angka); // Pemanggilan fungsi program_gj untuk menampilkan hasil

return 0;
}
