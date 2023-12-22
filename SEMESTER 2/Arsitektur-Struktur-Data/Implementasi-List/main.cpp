//NAMA   : FILFIMO YULFIZ AHSANUL HULQI
//KELAS  : IF 07 D
//NIM    : 19102143

#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <bits/stdc++.h>

using namespace std;

/* Link list node */
struct Node
{
    string data;
    int posisi;
    int teks;
    struct Node* next;
};
struct Node *a = NULL;
int line=1;

//Fungsi untuk menyisipkan simpul yang di berikan dalam link list yang di sort
void sortedInsert(struct Node**, struct Node*);

//Fungsi untuk sorting link list menggunakan insertion
void insertionSort(struct Node **head_ref){
    //Inisiasi sorted link list
    struct Node *sorted = NULL;

    //Memberikan link list dan memasukan setiap simpul ke sorted
    struct Node *current = *head_ref;
    while (current != NULL){
        // Store next for next iteration
        struct Node *next = current->next;

        //Insert current in sorted linked list
        sortedInsert(&sorted, current);

        //Update current
        current = next;
    }

    // Update head_ref to point to sorted linked list
    *head_ref = sorted;
}

/*Fungsi untuk menyisipkan new_node dalam daftar.
  Fungsi dibawah ini mengharapkan pointer ke head_ref karena
  dapat memodifikasi/merubah head dari input linked list (similar to push())*/
void sortedInsert(struct Node** head_ref, struct Node* new_node){
    struct Node* current;
    /* Special case for the head end */
    if (*head_ref == NULL || (*head_ref)->data >= new_node->data)
    {
        new_node->next = *head_ref;
        *head_ref = new_node;
    }
    else
    {
        /* Locate the node before the point of insertion */
        current = *head_ref;
        while (current->next!=NULL &&
               current->next->data < new_node->data)
        {
            current = current->next;
        }
        new_node->next = current->next;
        current->next = new_node;
    }
}

/* BELOW FUNCTIONS ARE JUST UTILITY TO TEST sortedInsert */

/* Function untuk print linked list */
void printList(struct Node *head)
{
    struct Node *temp = head;
    char abjad;
    while(temp != NULL)
    {
        abjad = temp->data[0];

        cout<< "["<<temp->data[0]<< "]"<<endl;

        while(temp != NULL){
            if(temp->data[0] == abjad){
                cout<< "'"<< temp->data << "'"<< " Posisi :"<< temp->posisi<<" Teks Ke-> "<< temp->teks << endl;
                temp = temp->next;
            }
            else{
                break;
            }
        } cout<<endl;

    }
    system("pause");
}

/* Fungsi yang berguna untuk insert node pada awal dari linked list */
void push(struct Node** head_ref, string new_data, int new_posisi, int new_teks)
{
    /* allocate node */
    struct Node* new_node = new Node;

    /* put in the data  */
    new_node->data  = new_data;
    new_node->posisi = new_posisi;
    new_node->teks = new_teks;

    /* link the old list off the new node */
    new_node->next = (*head_ref);

    /* move the head to point to the new node */
    (*head_ref)    = new_node;
}

vector<string> explode( const string &delimiter, const string &str)
{
    vector<string> arr;

    int strleng = str.length();
    int delleng = delimiter.length();
    if (delleng==0)
        return arr;//no change

    int i=0;
    int k=0;
    while( i<strleng )
    {
        int j=0;
        while (i+j<strleng && j<delleng && str[i+j]==delimiter[j])
            j++;
        if (j==delleng)//found delimiter
        {
            arr.push_back(  str.substr(k, i-k) );
            i+=delleng;
            k=i;
        }
        else
        {
            i++;
        }
    }
    arr.push_back(  str.substr(k, i-k) );
    return arr;
}


bool search_text(Node* head, string x)
{
    Node* current = head; // Initialize current
    while (current != NULL)
    {
        if (current->data == x){
            cout<< " '' " << current->data << " '' "<< " Posisi :"<< current->posisi <<" Teks Ke-> "<< current->teks <<endl;
            return true;
        }

        current = current->next;
    }
    return false;
}

char menu(){
    char inputan;
    cout << endl;
    cout << "=========================" << endl;
    cout << "PROGRAM IMPLEMENTASI LIST" << endl;
    cout << "=========================" << endl << endl;

    cout << "========== MENU ==========" << endl;
    cout << "<i> Input File Text    " << endl;
    cout << "<s> Search File        " << endl;
    cout << "<p> Tampilkan Isi File " << endl;
    cout << "<e> Exit               " << endl;
    cout << "==========================" << endl << endl;

    cout << "-- Masukan Pilihan --> ";
    cin >> inputan;
    cout << endl;

   return inputan;
}

int main(){
    char pilih = menu();

   if(pilih=='i'){
    string str;
    cout<< "Masukan Text : ";
    cin.ignore();
    getline(cin, str);
    transform(str.begin(), str.end(), str.begin(), ::tolower);

    vector<string> v = explode(" ", str);
    for(int i=0; i<v.size();i++){
        push(&a, v[i], i+1, line);
    }

    line++;
   }

    else if(pilih=='s'){
        string kunci;
        cout<< "Masukan Kata Kunci :";
        cin.ignore();
        getline(cin,kunci);

        search_text(a, kunci);

        system("pause");
    }

    else if(pilih=='p'){
        insertionSort(&a);
        printList(a);
    }
    else if(pilih=='e'){
        cout << "======== PROGRAM BERAKHIR, TERIMAKASIH ========" << endl << endl;
        exit(0);
    }
    system("cls");

    return main();
}
