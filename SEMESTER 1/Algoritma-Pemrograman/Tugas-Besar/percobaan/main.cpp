#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <windows.h>

using namespace std;

int main(){
int a,n;
string nama;
char alamat[50];
char umur[20];
char kelas[20];

cout << "DAFTAR MAHASISWA" << endl;
cout << "Masukan Jumlah Mahasiswa ";
cin >> n;
for (a=1; a<=n; a++){
    system("cls");

    cout << "DATA KE - " << a << endl;
    cout << "Masukan Nama ";
    cin >> nama;
    getline(cin, nama);
    cout << "Masukan Alamat ";
    cin >> alamat;
    cout << "Masukan Umur ";
    cin >> umur;
    cout << "Masukan Kelas ";
    cin >> kelas;
}

return 0;
}
