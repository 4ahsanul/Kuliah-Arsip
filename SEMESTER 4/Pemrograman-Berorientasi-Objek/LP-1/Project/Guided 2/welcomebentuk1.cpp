#include <iostream>
#include <conio.h>

/*
FILFIMO YULFIZ ASHANUL HULQI
19102143
*/

using namespace std;

class Welcome{
public:
    void display(){
        cout<<"Selamat Datang Di Praktikum PBO"<<endl;
    }
};

int main(){
    Welcome W;
    W.display();
    getch();
}
