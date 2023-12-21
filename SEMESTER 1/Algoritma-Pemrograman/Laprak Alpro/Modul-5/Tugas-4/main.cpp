//NamaProgram: OperasiHitungMariks3x3
#include <iostream>
using namespace std;

//DEKLARASI
int MatriksA[3][3]={{10,20,30},{1,2,3},{40,50,60}};
int MatriksB[3][3]={{10,20,30},{1,2,3},{40,50,60}};
int MatriksC[3][3];//Untuk hasil penjumlahan array 1 dan 2
int a,b;

int main(){
    cout << "=====PRGRAM OPERASI HITUNG MATRIKS=====" << endl << endl;
    cout << "Matriks A :" << endl;
    //INTRUKSI PERULANGAN
    for(a=0; a<3; a++){ //Perulangan baris
            for(b=0; b<3; b++){ //Perulangan kolom
            cout << MatriksA[a][b] << " ";//Output array matriks A
        }cout << endl;
    } cout << endl;

    cout << "Matriks B :" << endl;
    //INTRUKSI PERULANGAN
    for(a=0; a<3; a++){ //Perulangan baris
            for(b=0; b<3; b++){ //Perulangan kolom
            cout << MatriksB[a][b] << " "; //Output array matriks B
        }cout << endl;
    } cout << endl;

    cout << "Penjumlahan Matriks A+B :" << endl;
    //INTRUKSI PERULANGAN PENJUMLAHAN
        for(a=0; a<3; a++){ // Perulangan baris
            for(b=0; b<3; b++){ //Perulangan kolom
                //RUMUS
                MatriksC[a][b]= MatriksA[a][b] + MatriksB[a][b];
                //OUTPUT HASIL PENJUMLAHAN
                cout << MatriksA[a][b] << " + " << MatriksB[a][b] << " = " << MatriksC[a][b] << "  ";
            }cout << endl;
        } cout << endl;

    cout << "Pengurangan Matriks A-B :" << endl;
    //INTRUKSI PERULANGAN PENGURANGAN
        for(a=0; a<3; a++){ //Perulangan baris
            for(b=0; b<3; b++){ //Perulangan kolom
                //RUMUS
                MatriksC[a][b]= MatriksA[a][b] - MatriksB[a][b];
                //OUTPUT HASIL PENGURANGAN
                cout << MatriksA[a][b] << " - " << MatriksB[a][b] << " = " << MatriksC[a][b] << "  ";
            }cout << endl;
        } cout << endl;

    return 0; //Program telah berakhir
}
