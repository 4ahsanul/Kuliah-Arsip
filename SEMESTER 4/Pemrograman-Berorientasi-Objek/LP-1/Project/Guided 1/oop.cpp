#include <iostream>
#include <conio.h>

using namespace std;

/*
FILFIMO YULFIZ AHSANUL HULQI
19102143
*/

class DemoObjectOriented{
public:
    void helloWorld(int jmlh_looping);
    int tambah(int bil1,int bil2);
};

//Pembentukan Loop untuk Hello World
void DemoObjectOriented::helloWorld(int jmlh_looping){
    for(int i=0;i<jmlh_looping;i++){
        cout<<i+1<<". Hello World...."<<endl;
    }
}

//Pembentukan untuk melakukan Penjumlahan
int DemoObjectOriented::tambah(int bil1, int bil2){
    return bil1+bil2;
}

int main()
{
    int bil1=5, bil2=2;
    int jmlh_looping=5;
    DemoObjectOriented Demo; //Pembentukan Objek
    cout<<endl;
    cout<<"-Display Hello World-"<<endl;
    Demo.helloWorld(jmlh_looping); //Pemanggilan Prosedur
    cout<<endl<<"-Pemanggilan Fungsi Tambah-"<<endl; //Pemanggilan Fungsi
    cout<<"Hasil Operasi Tambah : "<<Demo.tambah(bil1,bil2);
    cout<<endl;
    getch();
    return 0;
}
