/* create a class car
private members 
brand 
price 
public members:
 a constructor that initialize brand and price 
 a function display car() to print car details
*/
#include <iostream>
using namespace std;
class car{
   private:
    string  brandname;
    double price;
    public:
    car(string b, double p){
        brandname=b;
        price=p;
    }
    void display(){
       cout<<"brand name is :"<<brandname<<endl;
         cout<<"price is :"<<price<<endl;
    }
};
int main(){
    car c("audi", 5000);
    c.display();
    return 0;
}