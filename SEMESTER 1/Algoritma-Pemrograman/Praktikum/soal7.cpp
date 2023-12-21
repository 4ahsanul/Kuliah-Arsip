#include <iostream>

using namespace std;

int main()
{
    /*
        Program mencetak segi empat dengan nesetd looping
    */
    // perulangan dari i = 0 dan selama i kurang dari 10
    for (int i = 0; i < 10; i++){
        // perulangan dari j = 0 dan selama j kurang dari 10
        for (int j = 0; j < 10; j++){
            // mencetak * (bintang)
            cout << "*";
        }
        // mencetak baris baru
        cout << endl;
    }

    cout << endl;
    return 0;
}
