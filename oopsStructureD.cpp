/*Create Date structure and include it inside Student structure. 
Use pointer-based functions for input and output.

Requirements:
• Define Date before Student.
• Use nested member access.
• Pass pointer to functions.

Hints:
• Access nested members using -> and dot.
• Display date in DD/MM/YYYY format.*/
#include <iostream>
using namespace std;
struct Date{
    int day;
    int month;
    int year;
};
struct Student{
    string name;
    int rollno;
    Date dob; // Date of Birth
};
void inputStudentData(Student *s){
    cout<<"Enter student name: ";
    getline(cin, s->name);
    cout<<"Enter roll number: ";
    cin>>s->rollno;
    cout<<"Enter date of birth (day month year): ";
    cin>>s->dob.day>>s->dob.month>>s->dob.year;
    cin.ignore(); // To consume the newline character after input
}
void displayStudentData(Student *s){
    cout<<"Student Name: "<<s->name<<endl;
    cout<<"Roll Number: "<<s->rollno<<endl;
    cout<<"Date of Birth: "<<s->dob.day<<"/"<<s->dob.month<<"/"<<s->dob.year<<endl;
}
int main(){
    Student student;
    inputStudentData(&student);
    displayStudentData(&student);
    return 0;
}
