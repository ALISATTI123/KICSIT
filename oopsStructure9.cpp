
/*Create an array of five Student structures. 
Use functions to input data and determine the student with highest marks.

Requirements:
• Pass array to function.
• Use loop inside input function.
• Track index of highest marks.
• Display result using separate function.

Hints:
• Initialize max variable properly.
• Avoid hardcoded comparisons.
• Keep search logic separate from input.*/

#include <iostream>
using namespace std;
struct student{
    string name[20];
    double rollno[7];
    double marks[10];
};
void inputData(student s){
    for(int i=0; i<5; i++){
        cout<<"Enter name of student "<<i+1<<": ";
        cin>>s.name[i];
        cout<<"Enter roll number of student "<<i+1<<": "; 
        cin>>s.rollno[i];
        cout<<"Enter marks of student "<<i+1<<": ";
        cin>>s.marks[i];
    }
}
void findHighestMarks(student s){
   double maxmarks =s.marks[0];
   int index=0;
    for(int i=0;i<5;i++){
        if(s.marks[i]>maxmarks){
            maxmarks=s.marks[i];
            index=i;
        }
    }
}
void display(student s){
    cout<<"student with highest marks is:"<<s.name[0]<<endl;
    cout<<"roll number is:"<<s.rollno[0]<<endl;
    cout<<"marks is :"<<s.marks[0]<<endl;
}
int main(){
    student s;
    inputData(s);
    findHighestMarks(s);
    display(s);
    return 0;
}