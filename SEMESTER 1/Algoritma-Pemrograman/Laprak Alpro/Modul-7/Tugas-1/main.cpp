//NamaProgram: PengurutanNilaiSiswa
#include <iostream>

using namespace std;

//PROSEDUR DARI SELECTION SORT, yang akan mengurutkan suatu Array atau Data
void selection_sort(float arr[], int length){
    int tmp, j;

    for (int i = 0; i < length - 1; i++){
        j = i;

            // Untuk melakukan perbandingan nilai yang terdapat didata, yang dimana n adalah jumlah total elemen dikurangi 1
            while (j > 0 && arr[j-1] < arr[j]){
                tmp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = tmp;
                j--;
            }
    }
}

//PROSEDUR PRINT ARRAY, yang berfungsi untuk menampilkan array
void print_array(float a[], int length){
    for(int i = 0; i < length; i++){
        cout << a[i] << "\t";
    }
    cout << endl;
}

int main(){
    //Banyaknya data yang akan diurutkan
    int length = 5;
    //Data yang akan diurutkan
    float a[length] = {3.8, 2.9, 3.3, 4.0, 2.4};

    //Akan menampilkan data sebelum diurutkan
    cout << "Data IPS Sebelum Di Urutkan" << endl;
    print_array(a, length);

    //Prosedur selection dipanggil, untuk melakukan sorting
    selection_sort(a, length);

    //Akan menampilkan data setelah diurutkan
    cout << "Data IPS Sesudah Di Urutkan" << endl;
    print_array(a, length); // Output hasil sorting

return 0; // Program berakhir
}
