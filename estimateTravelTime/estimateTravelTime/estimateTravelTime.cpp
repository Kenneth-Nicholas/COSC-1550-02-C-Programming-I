//*******************************************************************************************************
//
//        File:              estimateTravelTime.cpp
//
//        Student:           Kenneth Nicholas
//
//        Assignment:        Assignment 2
//
//        Course Name:       Programming I
//
//        Course Number:     COSC 1550 - 02 
//
//        Due:               Feb 02, 2017
//
//*******************************************************************************************************

#include <iostream>
using namespace std;

//*******************************************************************************************************

int main()
{
	//Constants
	float distance = 2150.55;          // distance, in miles
	float carspeed = 65.0;             // car speed, in miles per hour
	float remaininghours = 0.0854;     // remaining hours to convert to minutes
	float minutesperhour = 60.0;       // number of minutes in an hour
	float remainingminutes = 0.124;    // remaining minutes to convert to seconds
	float secondsperminute = 60.0;     // number of seconds in a minute
	int hours = 33.0854;               // the number of hours the car travelled in hours (excluding minutes and seconds)
	int minutes = 5.124;               // the number of minutes the car travelled (excluding the number of hours and seconds)
	int seconds = 7.44;                // the number of seconds the car travelled rounded (excluding the number of hours and minutes)

	//Variables
	float time;                        // estimated travel time, in hours
	float timeinminutes;               // estimated travel time (remaining hours converted to minutes)
	float timeinseconds;               // estimated travel time (remaining minutes converted to seconds)

	//Expressions
	time = distance / carspeed;     
	timeinminutes = remaininghours * minutesperhour;
	timeinseconds = remainingminutes * secondsperminute;

	//Displayed Text
	cout << "If we assume that a car is travelling at a constant rate of " << carspeed << " miles per hour, " << endl;
	cout << "then how long would it would take for the car to travel " << distance << " miles?" << endl;
	cout << endl;
	cout << "It would take the car approximately " << hours << " hours, " << minutes << " minutes, and " << seconds << " seconds to travel " << distance << " miles." << endl;

	return 0;
}

//*******************************************************************************************************
// 1>------ Build started: Project: ConsoleApplication2, Configuration: Debug Win32 ------
// 1>  estimateTravelTime.cpp
// 1>c:\users\admin\desktop\estimatetraveltime.cpp(33) : warning C4305 : 'initializing' : truncation from 'double' to 'float'
// 1>c:\users\admin\desktop\estimatetraveltime.cpp(35) : warning C4305 : 'initializing' : truncation from 'double' to 'float'
// 1>c:\users\admin\desktop\estimatetraveltime.cpp(37) : warning C4305 : 'initializing' : truncation from 'double' to 'float'
// 1>c:\users\admin\desktop\estimatetraveltime.cpp(39) : warning C4244 : 'initializing' : conversion from 'double' to 'int', possible loss of data
// 1>c:\users\admin\desktop\estimatetraveltime.cpp(40) : warning C4244 : 'initializing' : conversion from 'double' to 'int', possible loss of data
// 1>c:\users\admin\desktop\estimatetraveltime.cpp(41) : warning C4244 : 'initializing' : conversion from 'double' to 'int', possible loss of data
// 1>  ConsoleApplication2.vcxproj->c:\users\admin\documents\visual studio 2013\Projects\ConsoleApplication2\Debug\ConsoleApplication2.exe
// == == == == == Build: 1 succeeded, 0 failed, 0 up - to - date, 0 skipped == == == == ==
//*******************************************************************************************************