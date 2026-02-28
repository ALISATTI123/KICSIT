/*Design a structure named Employee to store employee-related information such as ID, name, 
and basic salary. After taking input from the user, calculate house allowance as 10% and medical
 allowance as 5% of the basic salary. Add these allowances to the basic salary to calculate the
 total salary. Display all salary details in a well-formatted output. This problem helps you 
  practice calculations using structure data.
Hints:
- Use float or double for salary values.
- Calculate allowances using percentage formula.
- Store employee data before performing calculations.
- Display each salary component separately.
- Keep calculations outside input section*/

#include<iostream>
using namespace std;
struct employee{
    int id;
    string name;
    double basicsalary;
};
int main(){
   employee emp;
   cout<<"enter employee id:";
   cin>>emp.id;
   cin.ignore();  //to ignore the newline char left in the input buffer 
   cout<<"enter employee name:";
   getline(cin, emp.name);
   cout<<"enter employee basic salary:";
   cin>>emp.basicsalary; 
   
   // calculate allowances 
   double houseallowance=emp.basicsalary*0.10;
   double medicalallowance=emp.basicsalary*0.05;
   double totalsalary=emp.basicsalary+houseallowance+medicalallowance;

   //displaying employee details.

   cout<<"Employee Details:"<<endl;
   cout<<"ID: "<<emp.id<<endl;
   cout<<"Name: "<<emp.name<<endl;
   cout<<"Basic Salary: "<<emp.basicsalary<<endl;
   cout<<"House Allowance: "<<houseallowance<<endl;
   cout<<"Medical Allowance: "<<medicalallowance<<endl;
   cout<<"Total Salary: "<<totalsalary<<endl;
    return 0;
}
