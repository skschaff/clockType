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

    cout << "Line 9: After setting, yourClock: ";
    yourClock.printTime(); //print the time of yourClock 
    cout << endl;

        //Compare myClock and yourClock
    if (myClock.equalTime(yourClock))
        cout << "Line 13: Both times are equal."
             << endl;
    else    
        cout << "Line 15: The two times are not equal."
             << endl; 

    cout << "Line 16: Enter the hours, minutes, and "
         << "seconds: ";  
    cin >> hours >> minutes >> seconds; 
    cout << endl; 

        //Set the time of myClock using the value of the
        //variables hours, minutes, and seconds
    myClock.setTime(hours, minutes, seconds);

    cout << "Line 20: New myClock: ";                  //Line 20
    myClock.printTime();   //print the time of myClock   Line 21
    cout << endl;                                      //Line 22

        //Increment the time of myClock by one second
    myClock.incrementSeconds();                        //Line 23

    cout << "Line 24: After incrementing myClock by " 
         << "one second, myClock: ";                   //Line 24
    myClock.printTime();   //print the time of myClock   Line 25
    cout << endl;                                      //Line 26

        //Retrieve the hours, minutes, and seconds of the 
        //object myClock
    myClock.getTime(hours, minutes, seconds);          //Line 27

        //Output the value of hours, minutes, and seconds
    cout << "Line 28: hours = " << hours 
         << ", minutes = " << minutes 
         << ", seconds = " << seconds << endl;         //Line 28

    return 0;
}//end main



