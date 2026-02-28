/*Create a structure named Rectangle that contains length and width of a rectangle.
 Write a separate function that accepts a Rectangle structure as a parameter and calculates its area.
  The function should return the calculated area to the main function. In the main function,
   take input for length and width, call the function, and display the result.
    This problem demonstrates passing structures to functions.
Hints:
- Pass structure as function parameter.
- Use appropriate return type for area.
- Area formula: length × width.
- Keep function logic separate from input/output.
- Call function from main.*/

#include<iostream>
using namespace std;
struct rectangle{
    float length;
    float width;
};
float area(rectangle r){
    return r.length*r.width;
}
int main(){
    rectangle r;
    cout<<"enter lenhth and width of rectangle:";
    cin>>r.length>>r.width;
    float a=area(r);
    cout<<"area of rectangle is :"<<a;
    return 0;
}