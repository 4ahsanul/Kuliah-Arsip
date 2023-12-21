#include <iostream>
#include <string.h>
using namespace std;
 int main()
 {
    struct siswa
    {
    char nisn[20];
    char nama[20];
    char kelas[5];
    char tl[10];
    char tgl[10];
    };

    siswa sis[50];
    int a;
    char c[20];

    cout<<"Masukkan banyak inputnya = ";
    cin>>a;
    cout<<endl;
    for(int i=0; i<a; i++)
    {
    cout<<" Input Ke - "<<i+1<<endl;
    cout << "NISN : ";
    cin>>sis[i].nisn;
    cout << "Nama : ";
    cin>>sis[i].nama;
    cout << "Kelas : ";
    cin>>sis[i].kelas;
    cout << "Tempat Lahir : ";
    cin>>sis[i].tl;
    cout << "Tanggal Lahir : ";
    cin>>sis[i].tgl;
  }
  cout<<endl;
  cout<<"==============="<<endl;
  cout<<"  DAFTAR SISWA  "<<endl;
  cout<<"==============="<<endl;
  for(int j=0; j<a; j++)
        {
    cout<<endl;
    cout<<"NISN : "<<sis[j].nisn;
    cout<<endl;
    cout<<"Nama : "<<sis[j].nama;
    cout<<endl;
    cout<<"Kelas : "<<sis[j].kelas;
    cout<<endl;
    cout<<"Tempat Lahir : "<<sis[j].tl;
    cout<<endl;
    cout<<"Tanggal Lahir : "<<sis[j].tgl;
    cout<<endl;
  }
cout<<"Masukkan kata kunci pencarian (nisn) : ";
cin>>c;
 for(int y=0; y<a;y++)
 {
     if (strstr(sis[y].nama,c))
     {
        cout<<endl;
        cout<<"NISN : "<<sis[y].nisn;
        cout<<endl;
        cout<<"Nama : "<<sis[y].nama;
        cout<<endl;
        cout<<"Kelas : "<<sis[y].kelas;
        cout<<endl;
        cout<<"Tempat Lahir : "<<sis[y].tl;
        cout<<endl;
        cout<<"Tanggal Lahir : "<<sis[y].tgl;
        cout<<endl;
     }
     else{
         cout<<"maaf tidak ada";
     }

 }
return 0;
}
