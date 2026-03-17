/*Create a class named Rectangle with data members length and width.

Tasks:
1. Implement a nullary constructor.
2. Implement a constructor that accepts one parameter (length).
3. Implement a constructor that accepts both length and width.
4. Implement a function calculateArea().
5. Implement a display() function.
6. Add a destructor that prints a message when the object is destroyed.
Hint: Use constructor overloading with different parameter lists.
*/
#include<iostream>
using namespace std;
class rectangle{
    private:
    double length;
    double width;
    public:
    // nullary constructor
    rectangle(){
        length=0;
        width=0;
    }
    //constructor with one perimeter
    rectangle(double l){
        length=l;
        width=l;//make it a square if only one parameter is provided
    }
    //constructor with two perimeters
    rectangle(double l,double w){
        length=l;
        width=w;
    }
    double calculateArea(){
        return length*width;
    }
    void display(){
        cout<<"length is:"<<length<<endl;
        cout<<"width is:"<<width<<endl;
        cout<<"area is :"<<calculateArea()<<endl;
    }
    ~rectangle(){
        cout<<"object is destroyed"<<endl;
    }

};
int main(){
    rectangle r1;// nullary constructor
    rectangle r2(5);//constructor with one parameter
    rectangle r3(5,10);//constructor with two parameters
    cout<<"details of r1:"<<endl;
    r1.display();
    cout<<"details of r2:"<<endl;
    r2.display();
    cout<<"details of r3:"<<endl;
    r3.display();
    return 0;
}