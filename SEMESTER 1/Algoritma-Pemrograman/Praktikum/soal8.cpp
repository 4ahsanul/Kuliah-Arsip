#include <iostream>

using namespace std;

int main()
{
    /*
        Program mencetak segi empat dengan nesetd looping tapi tengahnya bolong
    */

    // perulangan dari 0 sampai selama i kurang dari 10
    for (int i = 0; i < 10; i++){
        // perulangan dari 0 sampai selama j kurang dari 10
        for (int j = 0; j < 10; j++){
            // jika i samadengan 0 atau i samadengan 9
            if (i == 0 || i == 9){
                // cetak *
                cout << "*";
            // jika tidak, jika j samadengan 0 atau j samadengan 9
            } else if (j == 0 || j == 9){
                // cetak *
                cout << "*";
            // jika tidak
            } else {
                // cetak spasi (untuk membuat lubang pada segiempat)
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
