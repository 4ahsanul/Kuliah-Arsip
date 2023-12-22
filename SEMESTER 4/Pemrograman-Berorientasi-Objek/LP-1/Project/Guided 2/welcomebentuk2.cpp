#include <iostream>
#include <conio.h>

using namespace std;

/*
FILFIMO YULFIZ ASHANUL HULQI
19102143
*/

class Welcome{
public:
    void display();
};

void Welcome::display(){
    cout<<"Selamat Datang Di Praktikum PBO"<<endl;
}

int main(){
    Welcome W;
    W.display();
    getch();
}
