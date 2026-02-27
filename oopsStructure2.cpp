/*Create a structure named Student to store name, roll number, and marks of students. 
Using this structure, declare an array capable of storing records of five students.
 Use a loop to take input for all students and store their data in the array. 
 After data entry, process the array to find the student who has obtained the highest marks. 
 Finally, display the details of that student clearly. This problem demonstrates arrays 
 of structures.
Hints:
- Use a for loop to input student data.
- Initialize a variable to store maximum marks.
- Keep track of the index of the top student.
- Use array indexing with structure members.
- Avoid hard-coded values inside logic.*/

#include<iostream>
using namespace std;
struct student{
  string name;
  int rollno;
  float marks;
};
int main(){
    student s[5];
    for(int i=0;i<5;i++){
        cout<<"enter name of student:"<<endl;
        getline(cin,s[i].name);
        cout<<"enter roll number of student:"<<endl;
        cin>>s[i].rollno;
        cout<<"enter marks of student:"<<endl;
        cin>>s[i].marks;
        cin.ignore();// to ignore the newline character after reading marks
    }
    student maxmarks=s[0];
    for(int i=1;i<5;i++){
        if(s[i].marks>maxmarks.marks){
            maxmarks=s[i];
        }
    }
    cout<<"Student with highest marks is:"<<endl;
    cout<<"Name: "<<maxmarks.name<<endl;
    cout<<"Roll Number: "<<maxmarks.rollno<<endl;
    cout<<"Marks: "<<maxmarks.marks<<endl;
}
