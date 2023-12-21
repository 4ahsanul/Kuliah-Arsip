//NamaProgram: PengurutanKarakater
#include <iostream>

using namespace std;

//Prosedur Bubble Sort Ascending
//Pada prosedur ini data yang akan ditampilkan dari nilai terkecil sampai terbesar
void bubble_sort_asc(char arr[], int length){
    bool not_sorted = true;
    int j = 0;
    char tmp;

    while (not_sorted){
        not_sorted = false;
        j++;
        for (int i = 0; i < length - j; i++){
            if (arr[i] > arr[i + 1]){
                tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
                not_sorted = true;
            }
        }
    }
}

//Prosedur Bubble Sort Descending
//Pada prosedur ini data yang akan ditampilkan sama seperti tugas no 1, dimana akan mengurutkan dari nilai terbesar ke nilai terkecil
void bubble_sort_des(char arr[], int length){
    bool not_sorted = true;
    int j = 0;
    char tmp;

    while (not_sorted){
        not_sorted = false;
        j++;
        for (int i = 0; i < length - j; i++){
            if (arr[i] < arr[i + 1]){
                tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
                not_sorted = true;
            }
        }
    }
}

//Prosedur Print Array untuk menampilkan atau mengouput array
void print_array(char a[], int length){
    for(int i = 0; i < length; i++){
        cout << a[i] << "\t";
    }
    cout << endl;
}

int main(){
    cout << "==========SELAMAT DATANG DI PROGRAM SORTING NAMA===========" << endl << endl;
    cout << "Masukan Nilai N : "; // User memasukkan nilai panjang atau banyaknya data yang ingin diinput
    int length;
    cin >> length;

    char a[length];

    // Pengulangan sebanyank n, dimana n adalah inputan banyak atau panjangnya data yang telah dinputkan oleh user
    for (int i = 0; i < length; i++){
        cout << "Karakter Ke-" << i+1 << " : ";
        cin >> a[i];
    }
    cout << endl;

    //Ouput dasar, sebelum dilakukan sorting
    cout << "Urutan karakter sebelum sorting :" << endl;
    print_array(a, length);
    cout << endl;

    //Proses sorting asc berjalan
    bubble_sort_asc(a, length);

    //Akan mengoutput data dari hasil sorting asc
    cout << "Urutan karakter sesudah ascending sort :" << endl;
    print_array(a, length);
    cout << endl;

    //Proses sorting desc berjalan
    bubble_sort_des(a, length);

    //Akan mengoutput data dari hasil sorting desc
    cout << "Urutan karakter sesudah descending sort :" << endl;
    print_array(a, length);
    cout << endl;

return 0; //Program berakhir
}
