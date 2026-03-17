/* Create a class named Book with data members title, author, and price.

Tasks:
1. Implement a parameterized constructor.
2. Create a display() function.
3. Create one object and copy it to another object.
4. Observe the behavior of the default copy constructor.
5. Add a destructor that prints a message when the object is destroyed.
*/
#include<iostream>
using namespace std;
class book{
    string title;
    string author;
    double price;
    public:
    //parameterized constructor
    book(string t,string a,double p){
        title=t;
        author=a;
        price=p;
    }
    void display(){
        cout<<"title is:"<<title<<endl;
        cout<<"author is:"<<author<<endl;
        cout<<"price is:"<<price<<endl;
    }
   book(const book &b){
        title=b.title;
        author=b.author;
        price=b.price;
    }
    ~book(){
        cout<<"object is destroyed"<<endl;
   }
};
int main(){
    book b1("Alibaba","Ali",9.99);//parameterized constructor
    cout<<"details of b1:"<<endl;
    b1.display();
    book b2=b1;// copy constructor
    cout<<"details of b2:"<<endl;
    b2.display();
    return 0;
}