//NamaProgram: OPERASI HITUNG ARRAY
#include <iostream>
#include <windows.h>
#include <iomanip>
#include <conio.h>
using namespace std;

    int pilihan;
    int array[10];
    int i;

int main(){
    do{
        system("cls"); // Untuk menclearscreen setiapkali kita telah selesai mengisi data, dan membuat tampilan program tetap clean
        cout << "SELAMAT DATANG DI PROGRAM OPERASI ARRAY" << endl << endl << endl;
        cout << "====================MENU====================" << endl;
        cout << endl << "=oo00ooo= KELUAR PROGRAM TEKAN 0 =ooo00oo=" << endl << endl;
        cout << "1. Input Array" << endl;
        cout << "2. Tampil Array" << endl;
        cout << "3. Cari Nilai Minimum" << endl;
        cout << "4. Cari Nilai Maksimum" << endl;
        cout << "5. Cari Rata-Rata " << endl << endl;
        cout << "Masukan Pilihan \t = ";
        cin >> pilihan;
        cout << endl;

        //PILIHAN 1
        if (pilihan == 1){
                //Untuk melakukan input
            cout << "=====INPUT ARRAY=====" << endl;
            for (int i=0; i<10; i++){
                cout << "Masukan bilangan ke-" << i+1 << " = ";
                cin >> array[i];
            }
        }

        //PILHAN 2
        else if (pilihan == 2){
                //Untuk menampilkan data yang telah diinput di pilihan 1
            cout << "=====ARRAY YANG DIINPUTKAN=====" << endl;
            for (int i=0; i<10; i++){
                cout << array[i] << endl;
            }
            cout << endl;
        }

        //PILIHAN 3
        else if (pilihan == 3 ){
                //INSTRUKSI PENCAARIAN NILAI MINIMUM
            int min;
            cout << "=====HASIL NILAI MINIMUM=====" << endl;
            for (int i=0; i<10; i++){
                if (array[i] < min){
                    min = array[i];
                    }
                }
                //OUTPUT MINIMUM
                cout << "Nilai minimum \t = " << min << endl << endl;
        }

        //PILIHAN 4
        else if (pilihan == 4){
                //INSTRUKSI PENCARIAN NILAI MAKSIMUM
            int max;
            max = 0;
            cout << "=====HASIL NILAI MAKSIMUM=====" << endl;
            for (int i=0; i<10; i++){
            if (array[i] > max){
                max = array[i];
                }
            }
                //OUTPUT MAKSIMUM
            cout << "Nilai Maksimumn \t = " << max << endl << endl;
        }

        //PILIHAN 5
        else if (pilihan == 5){
                //INSTRUKSI ARITMATIKA RATA-RATA
            float jumlah,rerata;
            for (int i=0; i<10; i++){
                jumlah = jumlah+array[i];
                }
                rerata = jumlah/10;
                //OUTPUT  RATA-RATA
            cout << "Rata-Ratanya adalah \t = " << rerata << endl << endl;
        }

        system ("pause"); //Untuk melakukan pause program agar dapat menyimpan dan proses, disini adalah data temporary akan disimpan agar dapat dilanjutkan pada operasi perhitungan lainnya
    }while (pilihan !=0);
return 0;
}
