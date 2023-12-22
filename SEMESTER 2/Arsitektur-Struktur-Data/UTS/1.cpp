//DIBUAT Oleh   :
//NIM           :19102143
//NAMA          :FILFIMO YULFIZ AHSANUL HULQI
//KELAS         :IF 07 D
//UNTUK UTS ITTP

#include <iostream>

using namespace std;

int main(){
    int n=6; // Kita asumsikan bahwa data yang telah diinput, telah diprogram oleh Programmer
    int a[n] = {1,2,3,4,5,6}; //Banyaknya data
    int b[n/2]; //Nilai dari data yang akan di shufle
    int c[n/2];

    //Akan menampilkan array awal yang telah diset oleh program
    cout << "ARRAY AWAL " << endl;
    for(int i=0;i<n;i++){
    cout<< a[i]<< " ";
    }

    cout << endl <<endl;

    for(int i=0;i<n/2;i++){
    b[i]=a[i];
   }

   //Menampilkan array L1
   cout << "ARRAY L1 :" << endl;
    for(int i=0;i<n/2;i++){
    cout<< b[i]<< " ";
    } cout << endl<< endl;

   for(int i=3;i<n;i++){
    c[i-3]=a[i];
   }

   //Menampilkan array L2
     cout << "ARRAY L2 :" << endl;
   for(int i=0;i<n/2;i++){
    cout<< c[i]<< " ";
    } cout << endl<< endl;
    a[0]=b[0];
    a[1]=c[0];

    //Menampilkan ARRAY gabungan dari array L1 dan L2
    cout << "ARRAY gabungan 1 :" << endl;
    for(int i=0;i<n/2-1;i++){
    cout<< a[i] << "    ";
   }
    cout << endl << endl;

    a[0]=b[0];
    a[1]=c[0];
    a[2]=b[1];
    a[3]=c[1];

    //MEnampilkan ARRAY gabungan dari array sebelumnya dan pengulangan proses shufle
    cout << "ARRAY gabungan 2 :" << endl;
    for(int i=0;i<n/2+1;i++){
    cout<< a[i] << "    ";
   }
    cout << endl<< endl;

    a[0]=b[0];
    a[1]=c[0];
    a[2]=b[1];
    a[3]=c[1];
    a[4]=b[2];
    a[5]=c[2];

    //Menampilkan hasil akhir dari Array
    cout << "ARRAY gabungan 3 (hasil akhir) :" << endl;
    for(int i=0;i<n;i++){
    cout<< a[i] << "    ";
   }
    cout << endl;

    return 0;
}
