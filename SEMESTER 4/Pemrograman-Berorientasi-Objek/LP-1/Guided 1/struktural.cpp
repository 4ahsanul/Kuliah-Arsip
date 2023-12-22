#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

using namespace std;

/*
FILFIMO YULFIZ AHSANUL HULQI
19102143
*/

//Pembentukan fungsi loop untuk Hello World
void helloWorld(int jmlh_looping){
    for(int i=0;i<jmlh_looping;i++){
        cout<<i+1<<". Hello World...."<<endl;
    }
}
//Untuk melakukan penjumlahan
int tambah(int bil1,int bil2){
    return(bil1+bil2);
}

int main(){
    int bil1=5,bil2=2;
    int jmlh_looping=5;
    cout<<endl;
    cout<<"-Display Hello World-"<<endl;
    helloWorld(jmlh_looping); //Pemanggilan prosedur
    cout<<endl<<"-Pemanggilan Fungsi Tambah-"<<endl; //Pemanggilan fungsi tambah
    cout<<"Hasil Operasi Tambah : "<<tambah(bil1,bil2);
    cout<<endl;
    getch();
    return 0;
}
