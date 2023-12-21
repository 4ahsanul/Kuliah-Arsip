#include <iostream>
using namespace std;
int addem(int, int);

int addem(int a, int b) {
int c;
c = a+b;
return c;
}

int main() {
int x=5, y=2, z;
z = addem(x,y);
cout << z << endl //akan terjadi error karena hilang nya ";" pada baris ini
return 0;
}
