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
    yourClock.setTime(5, 45, 16);                      //Line 8

    cout << "Line 9: After setting, yourClock: ";      //Line 9
    yourClock.printTime(); //print the time of yourClock Line 10
    cout << endl;                                      //Line 11

        //Compare myClock and yourClock
    if (myClock.equalTime(yourClock))                  //Line 12
        cout << "Line 13: Both times are equal."
             << endl;                                  //Line 13
    else                                               //Line 14
        cout << "Line 15: The two times are not equal."
             << endl;                                  //Line 15

    cout << "Line 16: Enter the hours, minutes, and "
         << "seconds: ";                               //Line 16
    cin >> hours >> minutes >> seconds;                //Line 17
    cout << endl;                                      //Line 18

        //Set the time of myClock using the value of the
        //variables hours, minutes, and seconds
    myClock.setTime(hours, minutes, seconds);          //Line 19

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



