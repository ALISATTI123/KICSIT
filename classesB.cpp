/*Create a class Circle to calculate and display the area of a circle.

Requirements:
• Store radius as a private data member.
• Use a constructor to initialize the radius.
• Implement a function that calculates the area of the circle.
• Implement another function that displays the calculated area.

Hints:
• Use the formula: Area = π × radius²
• Use π approximately equal to 3.14.
• Ensure the radius is a positive value.*/

#include<iostream>
using namespace std;
class Area{
    float radius;
    public:
    // constructor
    Area(float r){
        radius=r;
    }
    float calculateRadius(){
        return 3.14*radius*radius;
    }
    void display(){
             cout<<"area of the circle is:"<<calculateRadius()<<endl;}
};
int main(){
    double r;
    cout<<"enter radius of the circle:";
    cin>>r;
    Area a(r);
    a.display();
    return 0;
}
