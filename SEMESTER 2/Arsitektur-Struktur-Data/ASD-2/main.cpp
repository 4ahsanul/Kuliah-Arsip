#include <iostream>
#include <cstddef>
#include <assert.h>

//Nama : Andre Citro Febriliyan Lanyak
//kelas : IF07D
//NIM : 19102274

using namespace std;

int conter = 0;

struct Node {
    int data;
    Node * next;
    }
    *head, *tail;
void printMiddele (struct Node *head)
{
    struct Node *slow_ptr = head;
    struct Node *fast_ptr = head;

    if (head!=NULL)
    {
        while (fast_ptr != NULL && fast_ptr -> next != NULL)
        {
            fast_ptr = fast_ptr -> next -> next;
            slow_ptr = slow_ptr -> next;

        }
        cout << "Simpul Tengah = " << slow_ptr -> data ;
    }
}

void intHead(){
    head = NULL;
}

int isEmpty(){
    return head == NULL;
}

void insertDepan (int databaru){
    Node *baru;

    baru = new Node;
    baru -> data = databaru;
    baru -> next = NULL;

    if (isEmpty()== 1) {
        head = baru;
        tail = baru;
        tail -> next = NULL;
    }
    else {
        baru -> next = head;
        head = baru ;
    }
}

//indeks untuk simpul yang saat ini kita lihat
int Print (Node* head, int index)
{
    Node* current = head;
    int count = 0;
    while (current != NULL)
    {
        if (count == index)
            return(current -> data);
        count ++;
        current = current -> next;
    }
    /*
    jika kita sampai ke baris ini,
    penginput meminta elemen yang tidak ada,
    sehingga kita menyatakan gagal*/
    assert (0);
}
int main ()
{
    int databaru;
    cout << "masukkan bilangan (data), akhiri dg input -999 : " << endl;
    do {
        cout << "Input Data : ";
        cin >> databaru;
        insertDepan(databaru);
        conter++;
        }
    while (databaru != -999);
    conter --;
    cout << "Simpul Head = " << Print(head,conter) << " ";
    cout << "Simpul Tail = " << Print(head,1) << " ";

    if (conter &2 == 0)
        cout << "Simpul Tengah Tidak Ada Jumlah Genap" << endl;
    else
        printMiddele(head);
    return 0;
}
