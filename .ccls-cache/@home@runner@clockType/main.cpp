//The user program that uses the class clockType
   
#include <iostream>
#include "clockType.h"
  
using namespace std; 

int main()
{
    clockType myClock;
    clockType yourClock;  

    int hours;
    int minutes;
    int seconds;

        //Set the time of myClock
    myClock.setTime(5, 4, 30);
    cout << "myClock: ";
    myClock.printTime();  //print the time of myClock 
    cout << endl;

    cout << "yourClock: ";
    yourClock.printTime(); //print the time of yourClock
    cout << endl;

        //Set the time of yourClock
    yourClock.setTime(5, 45, 16); 

    cout << "After setting, yourClock: ";
    yourClock.printTime(); //print the time of yourClock 
    cout << endl;

        //Compare myClock and yourClock
    if (myClock.equalTime(yourClock))
        cout << "Both times are equal."
             << endl;
    else    
        cout << "The two times are not equal."
             << endl; 

    cout << "Enter the hours, minutes, and "
         << "seconds: ";  
    cin >> hours >> minutes >> seconds; 
    cout << endl; 

        //Set the time of myClock using the value of the
        //variables hours, minutes, and seconds
    myClock.setTime(hours, minutes, seconds);

    cout << "New myClock: ";
    myClock.printTime();   //print the time of myClock  
    cout << endl; 

        //Increment the time of myClock by one second
    myClock.incrementSeconds(); 

    cout << "After incrementing myClock by " 
         << "one second, myClock: "; 
    myClock.printTime();   //print the time of myClock 
    cout << endl; 

        //Retrieve the hours, minutes, and seconds of the 
        //object myClock
    myClock.getTime(hours, minutes, seconds); 

        //Output the value of hours, minutes, and seconds
    cout << "Line 28: hours = " << hours 
         << ", minutes = " << minutes 
         << ", seconds = " << seconds << endl;

    return 0;
}//end main



