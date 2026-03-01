
/*Create a structure named Date to store day, month, and year.
 Then create another structure named Student that includes name,
  roll number, and a Date structure variable to store the student's date of birth. 
  Take input for all fields from the user and display the complete student record.
   This problem introduces nested structures and shows how complex data can be managed.
Hints:
- Define Date structure before Student.
- Access nested members using dot operator.
- Use meaningful prompts for date input.
- Display date in day/month/year format.
- Ensure correct data types are used.*/

#include<iostream>
using namespace std;
struct date{
    int day;
    int month;
    int year;
};

// structure student
struct student{
    int rollno;
    string name;
    date dob;//date of birth
};
int main(){
    student s;
    cout<<"enter student name:";
    getline(cin,s.name);
    cout<<"enter student roll number:";
    cin>>s.rollno;
    cout<<"enter student date of birth(day month year):";
    cin>>s.dob.day>>s.dob.month>>s.dob.year;
    
    // displaying student record 
    cout<<"student name:"<<s.name<<endl;
    cout<<"student roll number:"<<s.rollno<<endl;
    cout<<"student date of birth:"<<s.dob.day<<"/"<<s.dob.month<<"/"<<s.dob.year<<endl;
    return 0;
}
