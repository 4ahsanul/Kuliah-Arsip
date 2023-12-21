#include <iostream>
#include <windows.h>

using namespace std;

struct fullname { //struct untuk nama lengkap, semua tipe data di dalamnya adalah string
string namadepan;
string namabelakang;
};

struct siswa { //struct yang memuat lebih dari satu tipe data
fullname nama; //tipe data berupa fullname karena pada struct diatas terdiri dari string, sehingga fullname diartikan tipe data string
string id;
float IPK;
};
siswa UGM[10]; //indeks untuk UGM

int main () {
    int n,i;
    cout<<"Masukkan banyak data : ";
    cin>>n;
    cout<<"Data mahasiswa :"<<endl;

    for (i=1; i<=n; i++) {
    system("cls");
    cout<<"Siswa UGM ke "<<i<<endl;
    cout<<"Nama depan :";
    cin>>UGM[i].nama.namadepan; //perhatikan pemanggilan struct
    cout<<"Nama belakang :";
    cin>>UGM[i].nama.namabelakang;
    cout<<"Masukkan ID :";
    cin>>UGM[i].id;
    cout<<"Masukkan IPK :";
    cin>>UGM[i].IPK;}

    for (i=1; i<=n; i++) {
    cout<<endl<<endl<<"Siswa UGM ke "<<i<<endl;
    cout<<"Nama :"<<UGM[i].nama.namadepan<<" "<<UGM[i].nama.namabelakang<<endl;
    cout<<"ID :"<<UGM[i].id<<endl;
    cout<<"IPK :"<<UGM[i].IPK<<endl;
    }
    system("pause");
 return 0;
 }
