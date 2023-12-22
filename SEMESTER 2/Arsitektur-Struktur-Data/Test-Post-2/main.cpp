/*
PROGRAM INI DIBUAT OLEH
Nama  : PANDY AFFAN DAFFAR
Kelas : IF 07D
Nim   : 19102154
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Queue {
	int front, rear, capacity;
	int* queue;
	Queue(int c)
	{
		front = rear = 0;
		capacity = c;
		queue = new int;
	}

	~Queue() { delete[] queue; }

	void queueEnqueue(int data)
	{
		if (capacity == rear) {
			printf(" Queue Penuh\n\n");
			return;
		}
		else {
			queue[rear] = data;
			rear++;
		}
		return;
	}

	void queueDequeue()
	{
		if (front == rear) {
			printf(" Queue Masih Kosong\n\n");
			return;}

		else {
			for (int i = 0; i < rear - 1; i++) {
				queue[i] = queue[i + 1];
			}

			rear--;
		}
		return;
	}

	void queueDisplay()
	{
		int i;
		if (front == rear) {
			printf("\nQueue Kosong \n");
			return;
		}

		for (i = front; i < rear; i++) {
			printf(" %d <-- ", queue[i]);
		}
		cout<<" Panjang Queue = "<<i<<"\n"<<endl;
		return;
	}

	void queueFront()
	{
		if (front == rear) {
			printf("\nQueue is Empty\n");
			return;
		}
		printf("\nFront Element is: %d", queue[front]);
		return;
	}
};
int main(void)
{
int full;
int operasi,jumlah,masukan;
int antri=1;

cout<<" Masukan ukuran queue : ";cin>>full;
Queue q(full);
do{
cout<<" Pilih Operasi Queue  : "<<endl;
cout<<" (1) Dequeue "<<endl;
cout<<" (2) Enqueue "<<endl;
cout<<" (3) print queue "<<endl;
cout<<" (4) exit "<<endl;
cout<<" Input ( angka saja ) : ";cin>>operasi;
if(operasi==1){
q.queueDequeue();
}else if(operasi==2){
cout<<" Masukan elemen  : ";cin>>masukan;
q.queueEnqueue(masukan);
cout<<" Panjang antrian : "<<antri<<endl<<endl;
antri=antri+1;
}else if(operasi==3){
q.queueDisplay();
}
}while(operasi!=4);

}
