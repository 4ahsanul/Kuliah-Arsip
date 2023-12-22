//============================//
//FILFIMO YULFIZ AHSANUL HULQI//
//IF 07 D                     //
//19102143                    //
//============================//

#include <iostream>

//Maximum data yang akan ditampung
#define MAX 7
#define true 1
#define false 0

using namespace std;

//Struct untuk antrian
struct {
    int depan, rear, data[MAX];
}Q;

//Cek apakah antrian penuh
bool isFull() {
	return Q.rear == MAX;
}

//Cek apakah antrian kosong
bool isEmpty() {
	return Q.rear == 0;
}

//Untuk menampilkan print dari antrian
void printQueue() {
	if (isEmpty()) {
    cout << "Antrian kosong"<<endl;
	}
	else {
		for (int i = Q.depan; i < Q.rear; i++)
		//Menambahkan koma jika data tidak terdapat di antrian pertama
			cout << Q.data[i] << ((Q.rear-1 == i) ? "" : " ");
			cout << " (panjang queue = " << Q.rear << ")";
		cout << endl;
  }
}

//Fungsi untuk menambahkan antrian
void enqueue() {
	if (isFull())
	{
		cout << "Antrian penuh!"<<endl;
	}
	else {
		int data;
		//Menambahkan data ke antrian
		cout << "Masukkan Data : ";cin >> data;
		Q.data[Q.rear] = data;
		//Menempatkan tail pada elemen data terakhir yang ditambahkan
		Q.rear++;
        cout << "Panjang Antrian = " << Q.rear << endl;
	}
}

//Fungsi untuk mengeluarkan antrian
void dequeue() {
	if (isEmpty())
	{
		cout << "Antrian masih kosong"<<endl;
	}
	else{
		cout << "Dequeue " << Q.data[Q.depan];
		//Menggeser antrian data ke head
		for (int i = Q.depan; i < Q.rear; i++)
			Q.data[i] = Q.data[i + 1];
		//Menempatkan tail pada data terakhir yang digeser
		Q.rear--;
		cout << " (panjang queue = " << Q.rear << ")" << endl;
	}
}

int main()
{
    //Pendeklarasian untuk ukuran dan pilihan yang akan diinput pada menu
    int ukuran;
    int pilihan;

    //Tamilan Menu
    cout << "Masukkan ukuran Queue : " ;
    cin >> ukuran;
    cout << "Pilih operasi Queue : " << endl;
    cout << "1. Dequeue " << endl;
    cout << "2. Enqueue " << endl;
    cout << "3. Print Queue " << endl;
    cout << "4. EXIT " << endl;

    //Loop menu untuk tampilan
    do {
        cout << "Pilih menu (angka saja) : ";
        cin >> pilihan;
        switch(pilihan){
        case 1: dequeue();
        cout << endl;
        break;
        case 2: enqueue();
        cout << endl;
        break;
        case 3: printQueue();
        cout << endl;
        break;
        case 4: cout << "EXIT" << endl;
        break;
        }
    } while (pilihan != 4);
    return 0;
}
