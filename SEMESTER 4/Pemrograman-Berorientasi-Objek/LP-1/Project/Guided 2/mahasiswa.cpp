#include <iostream>
#include <conio.h>

using namespace std;

/*
FILFIMO YULFIZ AHSANUL HULQI
19102143
*/

class Mahasiswa
{
    private:
        char nama[20];
        char nim[20];

    public:
        void inputData();
        void display();
};

void Mahasiswa::inputData(){
    cout<<"\n-Input Data Mahasiswa-"<<endl;
    cout<<"Masukkan Nama Mahasiswa :";
    cin>>nama;
    cout<<"Masukkan NIM :";
    cin>>nim;
    cout<<endl;
};

void Mahasiswa::display(){
    cout<<"\n-Display Data Mahasiswa-"<<endl;
    cout<<"Nama : "<<nama<<endl;
    cout<<"NIM : "<<nim<<endl;
};

int main(){
    Mahasiswa mhs;
    mhs.inputData();
    mhs.display();
    getch();
}
