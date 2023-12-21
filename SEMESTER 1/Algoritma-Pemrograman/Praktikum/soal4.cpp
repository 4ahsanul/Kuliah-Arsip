#include <iostream>

using namespace std;

int main()
{
    //  deklarasi variabel bilangan
    int bilangan;
    //  mencetak tulisan masukkan bilangan
    cout << "Masukkan bilangan : ";
    //  input ke variabel bilangan
    cin >> bilangan;

    // perulangan dari 1 dan sampai selama i kurang dari samadengan blangan
    for(int i = 1; i <= bilangan; i++){
        // perulangan dari j = i dan sampai selama j lebih dari 0
        for(int j = i; j > 0; j--){
            // mencetak nilai i
            cout << i;
        }
    }
    return 0;
}
