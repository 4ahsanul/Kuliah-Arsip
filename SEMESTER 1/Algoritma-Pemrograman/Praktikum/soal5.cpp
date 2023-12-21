#include <iostream>

using namespace std;

int main()
{
    //  deklarasi variabel bilangan
    int bilangan;

    // lakukan
    do {
        //  cetak tulisan Masukkan bilangan
        cout << "Masukkan bilangan : ";
        //  input ke variabel bilangan
        cin >> bilangan;
    } while(bilangan != 0); // ketika bilangan tidak samadengan 0

    // mencetak tulisan Bye :(
    cout << "Bye :(" << endl;

    return 0;
}

