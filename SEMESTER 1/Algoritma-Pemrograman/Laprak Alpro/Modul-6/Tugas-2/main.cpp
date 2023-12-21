//NamaProgram: MenghitungKelilingLingkaran
#include <iostream>

using namespace std;

float keliling_o(float r){ // Fungsi menghitung keliling lingkaran
    float keliling = 2 * 3.14 * r; // Instruksi aritmatika untuk mencari keliling
    return keliling; // Nilai dikembalikan
}

int main(){
    float r;
    cout << "=====PROGRAM MENGHITUNG KELILING LINGKARAN=====" << endl << endl;
    cout << "Masukan Jari_Jari \t: ";
    cin >> r; // User memasaukkan input jari-jari yang nanti akan masuk ke fungsi keliling
    cout << "Keliling lingkaran dari jari-jari " << r << " adalah " << keliling_o(r) << endl; // Outpuut dan pemanggilan fungsi keliling
return 0; // Program berakhir
}
