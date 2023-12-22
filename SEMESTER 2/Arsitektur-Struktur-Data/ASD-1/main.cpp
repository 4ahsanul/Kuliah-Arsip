//Nama     : FILFIMO YULFIZ AHSANUL HULQI
//Kelas    : IF 07 D
//NIM      : 19102143

//Library
#include <iostream>
#include <cstddef>
#include <assert.h>

using namespace std;

int menu = 0;

struct node {
    int data;
    node * next;
    }
    *head, *tail;

void printMiddele (struct node *head)
{
    struct node *slow_ptr = head;
    struct node *fast_ptr = head;

    if (head!=NULL)
    {
        while (fast_ptr != NULL && fast_ptr -> next != NULL)
        {
            fast_ptr = fast_ptr -> next -> next;
            slow_ptr = slow_ptr -> next;

        }
        cout << "Data Tenggah " << slow_ptr -> data ;
    }
}

void intHead(){
    head = NULL;
}

int isEmpty(){
    return head == NULL;
}

void insertDepan (int databaru){
    node *baru;

    baru = new node;
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

//Indeks untuk simpul yang saat ini kita lihat
int GetNth (node* head, int index){
    node* current = head;
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

int main (){
    int databaru; //Pendeklarasian masukan untuk data baru yang akan diisi

    cout << "=================== PROGRAM PENCARIAN DATA ===================" << endl << endl;
    cout << "Masukkan bilangan (data), akhiri dengan input -999 : " << endl << endl;
    cout << "=================== ===================== ===================" << endl << endl;
    do { //Loop untuk memasukan data
        cout << "Masukan Data : ";
        cin >> databaru;
        insertDepan(databaru);
        menu++;
        }
    while (databaru != -999); //Akan berhenti jika user menginput -999
    menu --;
    cout << "Simpul Head = " << GetNth(head,menu) << " ";
    cout << "Simpul Tail = " << GetNth(head,1) << " ";

    if (menu %2 == 0)
        cout << "Simpul Tengah Tidak Ada! Jumlah Genap" << endl;
    else
        printMiddele(head);
    return 0;
}
