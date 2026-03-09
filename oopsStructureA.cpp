/*Create an Employee structure storing ID, name, and basic salary.
Calculate house allowance (10%) and medical allowance (5%) using separate functions. 
Compute total salary and display detailed salary breakdown.

Requirements:
• Use pointer to Employee.
• Write separate functions for each allowance.
• Return calculated values properly. 
• Display formatted salary slip.

Hints:
• Use float or double.
• Do not mix input and calculation logic.
• Use arrow operator for pointer access.*/

#include <iostream>
using namespace std;
struct Employee{
    int id;
    string name;
    double basicSalary;
};
double calculateHouseAllowance(Employee *e){
    return e->basicSalary*0.10;
}
double calculateMedicalAllowance(Employee *e){
    return e->basicSalary*0.05;
}
void displaySalarySlip(Employee *e){
    double houseAllowance=calculateHouseAllowance(e);
    double medicalAllowance=calculateMedicalAllowance(e);
    double totalSalary=e->basicSalary+houseAllowance+medicalAllowance;
    cout<<"Salary Slip for Employee ID: "<<e->id<<endl;
    cout<<"Name: "<<e->name<<endl;
    cout<<"Basic Salary: "<<e->basicSalary<<endl;
    cout<<"House Allowance (10%): "<<houseAllowance<<endl;
    cout<<"Medical Allowance (5%): "<<medicalAllowance<<endl;
    cout<<"Total Salary: "<<totalSalary<<endl;
}
int main(){
    Employee emp;
    cout<<"Enter Employee ID: ";
    cin>>emp.id;
    cin.ignore(); // To consume the newline character after ID input
    cout<<"Enter Employee Name: ";
    getline(cin, emp.name);
    cout<<"Enter Basic Salary: ";
    cin>>emp.basicSalary;
    
    displaySalarySlip(&emp);
    
    return 0;
}