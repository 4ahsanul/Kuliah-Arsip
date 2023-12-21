#include <iostream>
#include <conio.h>
void show_book(const Book &book );
void input_book (Book &book);
int main ()
{
  Book book[10];
  int i,x;
  char search;
  int position,found;
  cout<<"How many book you want to add = "; cin>>x;
  for (i=0; i<x; i++){
    input_book(book[i]);
  }
  for(i=0; i<x; i++){
    show_book(book[i]);
  }
//this is my searching code , im stuck here ..
  cout<<"\n====== SEARCH ====="<<endl;
  cout <<"Enter book code = "; cin>>search;
  for (i=0; i<x; i++){

  if (found != 0){
    show_book(book[position]);
  } else{
cout<<"The book is not exist";
 }
  return 0;
}
//function declaration...
void show_book(const Book &book){
  cout<<book.book_code<<" | "<<book.book_title<<endl;
}
void input_book(Book &book){
      cout << "Book code : ";cin  >> book.book_code;
      cin.ignore(1, '\n');
      cout << "Book title : " ;getline(cin, book.book_title);
}
