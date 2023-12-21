#include <iostream>
using namespace std;
int main(){
    int bil1, bil2, kpk;
    kpk = 0;

    cout << "=====PROGRAM MENENTUKAN KELIPATAN KPK=====" << endl;
    cout << "Masukkan bilangan ke-1 \t: "; //Output, untuk memberitahu user untuk mengisi data 1
    cin >> bil1; //User dapat memasukkan bilangan atau data ke-1
    cout << "Masukkan bilangan ke-2 \t: "; //Output, untuk memberitahu user untuk mengisi data 1
    cin >> bil2; //User dapat memasukkan bilangan atau data ke-2

    for (int x=1; x<=bil2;x++){
        kpk=kpk+bil1;
        //if berfungsi untuk mengecek peryataan yang dimasukkan atau membandingkan pernyataan yang dimasukkan oleh User,
        //jika nilai yang ada dalam peryataan tersebut sesuai, maka program akan dijalankan. dan jika tidak maka akan sebaliknya atau tidak bisa dijalankan.
        if(kpk % bil2==0)

      {
          cout << "KPK \t: " << kpk;
          break; //berfungsi memberbhentikan peryataan pengulangan
      }
    }

    return 0;
}
