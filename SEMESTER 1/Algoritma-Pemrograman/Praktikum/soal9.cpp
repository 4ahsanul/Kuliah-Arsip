#include <iostream>

using namespace std;

int main()
{
    // perulangan dari 1 selama i kurang dari samadengan 5 (mengulang selama 5 kali)
    for(int i = 1; i <= 5; i++) {
        // perulangan dari 1 selama j kurang dari samadengan i (mengulang selama nilai dari i)
        for(int j = 1; j <= i; j++){
            //  mencetak *
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
