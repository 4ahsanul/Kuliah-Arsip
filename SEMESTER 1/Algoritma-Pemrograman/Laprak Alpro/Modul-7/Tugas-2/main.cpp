//NamaProgram: PengurutanNama-Nama
#include <iostream>

using namespace std;

//PROSEDUR BUBBLE SORT
void bubble_sort(string arr[], int length){
    bool not_sorted = true;
    int j = 0;
    string tmp;

    // INSTRUKSI UNTUK MELAKUKAN SORTING
    while (not_sorted){
        not_sorted = false;
        j++;
        for (int i = 0; i < length - j; i++){
            if (arr[i] > arr[i + 1]){
                tmp = arr[i]; // Temporary, untuk menyimpan data arr[i] sementara
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
                not_sorted = true;
            }
        }
    }
}

// PROSEDUR PRINT ARRAY
void print_array(string a[], int length){
    for(int i = 0; i < length; i++){
        cout << a[i] << "\t";
    }
    cout << endl;
}

int main(){
    int length = 10;
    string a[length] = {"Siti", "Situ", "Sana", "Ana", "Ani", "Caca", "Cici", "Dida", "Dodo", "Dadi"};

    cout << "Daftar Nama Sebelum Di Urutkan" << endl;
    print_array(a, length);
    cout << endl;

    bubble_sort(a, length);

    cout << "Daftar Nama Sesudah Di Urutkan" << endl;
    print_array(a, length);

return 0;
}
