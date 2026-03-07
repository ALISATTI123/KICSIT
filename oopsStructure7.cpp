
/*Problem Description:
Design a structure named Student to store name, roll number, and marks. 
Create separate functions to take input and display output. 
The program must demonstrate passing structures to functions.

Requirements:
o Define structure before main().
o Create at least two functions (input and display).
o Call functions from main().
o Do not write input/output logic inside main().

Hints:
o Pass structure by reference to avoid copying.
o Use const keyword in display function.
o Use meaningful prompts.
o Display formatted output.*/

#include<iostream>
using namespace std;
struct Student{
	string name;
	int rollno;
	float marks;
};
void inputData(Student &s){
	cout<<"enter student name:";
	getline(cin,s.name);
	cout<<"enter rollno:";
	cin>>s.rollno;
	cout<<"enter marks:";
	cin>>s.marks;
}
void displayData(const Student &s){
	cout<<"student record"<<" "<<endl;
	cout<<"Name:"<<s.name<<endl;
	cout<<"rollno:"<<s.rollno<<endl;
	cout<<"marks:"<<s.marks<<endl;
}
int main()
{
 Student s; // creates structure variable
 inputData(s);
 displayData(s);
 return 0;
}

