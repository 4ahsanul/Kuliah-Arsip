#include <iostream>
#include <conio.h>
#include <stdlib.h>
#define \ 50
#define true 1
#define false 0

using std::cout;
using std::endl;
using namespace std;
int pil;
char jwb;
void pilih();

struct queue {
	int belakang;
	int elemen[];
	};float que; struct queue buatqueue;

int queuepenuh () {
	if(buatqueue.belakang==max)
		return true;
	else
		return false;}

int queuekosong ()
	{
	if (buatqueue.belakang == -1)
	return true;
	else
	return false;
}

void enqueue (float que)
	{
	if (queuepenuh() == true)
	cout<< "Queue Penuh\n";
	else
		{
		buatqueue.belakang++;
		buatqueue.elemen[buatqueue.belakang]=que;
			}
	}

void dequeue ()
{

	if(queuekosong()==true)
	{
	cout<<"Queue Kososngn\n";}
	else
		{
		cout<<"Dequeue "<<buatqueue.elemen[buatqueue.belakang];
		buatqueue.belakang--;
			}
	}

void bantu(){
	cout << que;
	enqueue(que);
	}

void cetakqueue() {
	cout<<"Queue = ";
	for (int i=0; i<=buatqueue.belakang; i++)
	{
		cout<<buatqueue.elemen[i]<<" ";}
	}

int main () {
	buatqueue.belakang = -1;
    do
    {
      cout<<endl;
      cout << "\t\t==Menu Queue=="<<endl;
      cout << "1. Enqueue"<<endl;
      cout << "2. Dequeue"<<endl;
      cout << "3. Cetak Queue"<<endl;
      cout << "4. Keluar"<<endl;
      cin >> pil;
      switch (pil){
		  case 1:{
		  do{
		  cin >> que;
          enqueue(que);
          cout << jwb;
		  }while(jwb=='y');
		  system ("cls");
		  }
		  break;
		  case 2:
		  dequeue();
		  cout<<", Dequeue Berhasil!\n";
		  getch();
		  system ("cls");
		  break;
		  case 3:
		  cetakqueue();
		  getch();
		  system ("cls");
		  break;
		  case 4:
		  exit (0);
		  break;
		  }
    } while(pil!=7);
    while(jwb=='y'|| jwb=='Y');
	}
