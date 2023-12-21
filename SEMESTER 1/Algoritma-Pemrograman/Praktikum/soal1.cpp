#include <iostream>

using namespace std;

int main()
{
    // deklarasi variabel angka, ganjil, dan genap.
    //  variabel genap dan ganjil diisi dengan nilai 0
    int angka, ganjil = 0, genap = 0;

    //  mencetak tulisan masukkan bilangan
    cout << "Masukkan bilangan : ";
    //  input ke variabel angka
    cin >> angka;

    //  perulangan dari 1 sampai kurang dari variabel angka
    for(int i = 1; i<= angka;i++){
        //  jika i mod 2 = 0 maka genap
        if(i%2 == 0){
            // genap = genap + 1
            genap++;
        // jika tidak
        } else {
            // ganjil = ganjil + 1
            ganjil++;
        }
    }

    // mencetak variabel angka, genap dan ganjil

    cout << angka << " memiliki " << genap << " bilangan genap dan "
        << ganjil << " bilangan ganjil\n";

    return 0;
}
