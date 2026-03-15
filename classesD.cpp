/*Create another Car class to store additional vehicle information.

Requirements:
• Store brand, model, and speed.
• Implement a function to take input from the user.
• Implement a function to display stored information.
• Create two objects of the class.
• Display details of both cars.

Hints:
• Ensure speed values are valid.
• Display information in a structured format.
• Test the program with different inputs.*/

#include<iostream>
using namespace std;
class car{
    string brand;
    string model;
    double speed;
    public:
    void input(){
        cout<<"enter brand name:";
        cin>>brand;
        cout<<"enter model name:";
        cin>>model;
        cout<<"enter speed of the car:";
        cin>>speed;
        if(speed<0){
            cout<<"speed should be a positive value:"<<endl;
            speed=0;
        }
    }
    void display(){
        cout<<"brand name is:"<<brand<<endl;
        cout<<"model name is:"<<model<<endl;
        cout<<"speed of the car is:"<<speed<<"km/h"<<endl;
    }
};
int main(){
    car c1,c2;
    cout<<"enter details of car 1:"<<endl;
    c1.input();
    cout<<"enter details of car 2:"<<endl;
    c2.input();
    cout<<"details of car1:"<<endl;
    c1.display();
    cout<<"details of car 2:"<<endl;
    c2.display();
    return 0;
}
