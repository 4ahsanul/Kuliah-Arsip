#include <iostream>

using namespace std;

int main()
{
    // perulangan dari 5 selama i lebih dari samadengan 1 (mengulang selama 5 kali)
    for(int i = 5; i >= 1; i--) {
        // perulangan dari 5 selama j lebih dari samadengan 1 (mengulang selama nilai dari i)
        for(int j = i; j >= 1; j--){
            // mencetak *
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
