/*Create a class Employee that stores employee details and allows salary updates.

Requirements:
• Store employee name and salary as private members.
• Implement a constructor to initialize employee details.
• Create a function to increase employee salary.
• Create a function to display employee details.

Hints:
• Ensure that salary increments are positive.
• Display employee name and updated salary clearly.
• Maintain separation between calculation and display logic.*/

#include<iostream>
using namespace std;
class employee{
    string name;
    double salary;
    public:
    // constructor
    employee(string n, double s){
        name=n;
        salary=s;
    }
    void increasesalary(double increment){
        if(increment>0){
            salary+=increment;
        }
        else{
            cout<<"increment should be a positive value:"<<endl;
        }
        }
        void display(){
            cout<<"Employee Name: "<<name<<endl;
            cout<<"Updated Salary: "<<salary<<endl;
        }
    };
int main(){
    string name;
    double salary,increment;
    cout<<"enter employee name:";
   getline(cin,name);
    cout<<"enter employee salary:";
    cin>>salary;
    cout<<"enter salary increment:";
    cin>>increment;
    employee e(name,salary);
    e.increasesalary(increment);
    e.display();
    return 0;
}
