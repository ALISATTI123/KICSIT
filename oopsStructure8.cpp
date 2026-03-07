
/*
Create a Book structure containing title, author, and price. 
Dynamically allocate two Book objects using pointers. 
Write functions to input data, compare prices, and display the most expensive book.

Requirements:
• Use new operator for dynamic allocation.
• Pass structure pointers to functions.
• Return pointer from comparison function.
• Free memory using delete.

Hints:
• Use arrow operator to access members.
• Keep comparison logic separate.
• Validate price input.
• Display complete details of selected book.*/

#include <iostream>
using namespace std;
struct bookInformation{
     string author;
     string title;
     double price;
     };
void inputData(bookInformation *b){
     cout<<"enter Auther name:"<<endl;
     getline(cin,b->author);
     cout<<"enter book title:"<<endl;
     getline(cin,b->title);
     cout<<"enter book price:"<<endl;
     cin>>b->price;
     cin.ignore();
}
bookInformation comparePrice(bookInformation *b1,bookInformation *b2){
    bookInformation expensive;
     if(b1->price>b2->price){
         expensive=*b1;
     }
     else{
          expensive=*b2;
     }
    return expensive;
}

void display(bookInformation *expensive){

     cout<<"expensive book :"<<endl;
     cout<<"author:"<<expensive->author<<endl;
     cout<<"title:"<<expensive->title<<endl;
     cout<<"price:"<<expensive->price<<endl;
}
 int main(){
     bookInformation *b1=new bookInformation;
     bookInformation *b2=new bookInformation ;
     bookInformation expensive;
     inputData(b1);
     display(b1);
     inputData(b2);
     display(b2);
     expensive=comparePrice(b1,b2);
     display(&expensive);
     delete b1;
     delete b2;
     return 0;
 }
