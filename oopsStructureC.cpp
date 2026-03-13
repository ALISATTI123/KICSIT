/*Create a Time structure with hours, minutes, and seconds. 
Write a function that adds two Time structures and returns 
result with proper carry handling.


Requirements:
• Return structure from function.
• Handle seconds ≥ 60.
• Handle minutes ≥ 60.

Hints:
• Test with boundary values.
• Keep addition logic clean.
• Display final time in HH:MM:SS format.*/
#include <iostream>
using namespace std;
struct Time{
    int hours;
    int minutes;
    int seconds;
};
Time addTime(Time t1, Time t2){
    Time result;
    result.seconds = t1.seconds + t2.seconds;
    result.minutes = t1.minutes + t2.minutes + result.seconds / 60; // Carry over seconds to minutes
    result.hours = t1.hours + t2.hours + result.minutes / 60; // Carry over minutes to hours
    result.minutes = result.minutes % 60; // Keep minutes within 0-59
    result.seconds = result.seconds % 60; // Keep seconds within 0-59
    return result;
}
void displayTime(Time t){
    cout << "Resulting Time: " << t.hours << " hours, " << t.minutes << " minutes, " << t.seconds << " seconds" << endl;
}
int main(){
    Time t1, t2;
    cout << "Enter first time (hours minutes seconds): ";
    cin >> t1.hours >> t1.minutes >> t1.seconds;
    cout << "Enter second time (hours minutes seconds): ";
    cin >> t2.hours >> t2.minutes >> t2.seconds;
    
    Time result = addTime(t1, t2);
    displayTime(result);
    
    return 0;
}