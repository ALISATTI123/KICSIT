/* Q1: 
   Design a structure named Student to represent the academic record of a single student. 
The structure should store the student's name, roll number, and marks. In the main function, 
declare a variable of Student type and ask the user to enter all required values. 
After taking input, display the complete student record in a clear and readable format. 
This problem will help you understand how structures group related data together. 
Make sure the output labels are meaningful so that the displayed information is easy to understand. 
Hints: - 
Use string data type for storing the student's name. - 
Use the dot (.) operator to access structure members. - 
Take input carefully for string values. - Display each member on a separate line.
 - Define the structure before the main function.*/


#include<iostream>
using namespace std;
struct Student {
    string name;
    int rollno;
    float marks;
};
int main(){
    Student s1;
    cout<<"enter the name of the student :";
    getline(cin,s1.name);
    cout<<"enter the roll number of the student :";
    cin>>s1.rollno;
    cout<<"enter the marks of the student :";
    cin>>s1.marks;
    
    // displaying students records
     cout<<" "<<endl;
    cout<<"displaying student record:"<<endl;
    cout<<" "<<endl;
    cout<<"student name :"<<s1.name<<endl;
    cout<<"student roll number:"<<s1.rollno<<endl;
    cout<<"student marks:"<<s1.marks<<endl;
    return 0;
}
   