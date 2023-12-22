//DIBUAT Oleh   :
//NIM           :19102143
//NAMA          :FILFIMO YULFIZ AHSANUL HULQI
//KELAS         :IF 07 D
//UNTUK UTS ITTP

#include <iostream>

using namespace std;

/*
//DEKLARASI INSERTION ASCENDING Untuk NIM GENAP
void insertion_sort_asc (string Array[], int Panjang) {
    int i, j;
    string x;
    for (i = 1; i < Panjang; i++){
        x = Array[i];
        j = i - 1;
        while (x < Array[j] && j >= 0){ //Yang Membedakan
            Array[j+1] = Array[j];
            j--;
        }
        Array[j+1] = x;
    }
}
*/

//DEKLARASI INSERTION DESCENDING
void insertion_sort_des (string Array1[], int Panjang1) {
    int i, j;
    string x;
    for (i = 1; i < Panjang1; i++){
        x = Array1[i];
        j = i - 1;
        while (x > Array1[j] && j >= 0){ //Yang Membedakan
            Array1[j+1] = Array1[j];
            j--;
        }
        Array1[j+1] = x;
    }
}


//UNTUK PRINT ARRAY
void show_array (string Array[], int Panjang) {
    for(int i = 0; i < Panjang; i++){
        cout << Array[i] << " ";
    }
}

//UNTUK PRINT ARRAY DESCENDING
void show_array_des (string Array1[], int Panjang1) {
    for(int i = 0; i < Panjang1; i++){
        cout << Array1[i] << " ";
    }
}

int main()
{
    string nama[99];
    string selesai;
    int inkremen = 0;

    cout << "====================================================" << endl;
    cout << "|                                                  |" << endl;
    cout << "| MENGURUTKAN NAMA DENGAN ASCENDING DAN DESCENDING |" << endl;
    cout << "|                                                  |" << endl;
    cout << "====================================================" << endl << endl;

    //LOOP UNTUK MENGINPUT DATA NAMA
    do{
    cout << "Masukan Nama : ";
    cin >> nama[inkremen++];
    cout << "Selesai (y/n) : ";
    cin >> selesai;
    cout << endl << endl;
    } while (selesai == "n" || selesai == "N");

    //LIST NAMA YANG TELAH TERINPUT
    cout << "Nama yang telah diinputkan adalah : ";
    show_array(nama, 99);
    cout << endl;

/*
    //LIST NAMA DENGAN SORTING ASCENDING
    cout << "Nama yang telah terurut (ASCENDING): ";
    insertion_sort_asc(nama, inkremen);
    cout << endl;
    show_array(nama, inkremen);
    cout << endl;
    cout << "===============================================";
    cout << endl << endl << endl;
*/

    //LIST NAMA DENGAN SORTING DESCENDING
    cout << "Nama yang telah terurut (DESCENDING): ";
    insertion_sort_des(nama, inkremen);
    cout << endl;
    show_array_des(nama, inkremen);
    cout << endl;
    cout << "===============================================";
    cout << endl << endl << endl;
    return 0;
}
