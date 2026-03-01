/*Create a structure named Time that stores hours, minutes, and seconds.
 Write a function that takes two Time variables as input and returns their sum as a Time structure.
  While adding, ensure that if seconds exceed 60, they are converted into minutes, 
  and if minutes exceed 60, they are converted into hours. Display the final calculated time in proper format. 
  This problem focuses on logical operations with structures.
Hints:
- Handle carry for seconds and minutes.
- Return structure from function.
- Use clear variable names.
- Test with different input values.
- Keep logic clean and readable.*/

#include<iostream>
using namespace std;
struct time{
	int hours;
	int minutes;
	int seconds;
};
time addtime(time t1,time t2){
	time result;
	//  add for seconds
	result.seconds=t1.seconds+t2.seconds;
	if(result.seconds>=60)
	{
		result.minutes=result.seconds/60;
		result.seconds=result.seconds%60;
	}
	else {
		result.minutes=0;
	}
	// add for minutes
	result.minutes=result.minutes+t1.minutes+t2.minutes;
	if(result.minutes>=60)
	{
		result.hours=result.minutes/60;
		result.minutes=result.minutes%60;
	}
	else {
		result.hours=0;
	}
	//add for hours
	result.hours=result.hours+t1.hours+t2.hours;
	return result;
}
int main()
{
   time t1,t2,sum;
   cout<<"enter time for t1:"<<endl;
   cin>>t1.hours>>t1.minutes>>t1.seconds;
   cout<<"enter time for t2:"<<endl;
   cin>>t2.hours>>t2.minutes>>t2.seconds;
   sum=addtime(t1,t2);
   
   //displaying total time
   cout<<"total time:";
   cout<<sum.hours<<"hours\t";
   cout<<sum.minutes<<"minutes\t";
   cout<<sum.seconds<<"seconds\n";
   return 0;
}

