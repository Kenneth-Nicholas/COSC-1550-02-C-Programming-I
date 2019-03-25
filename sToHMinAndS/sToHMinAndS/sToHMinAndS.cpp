//*******************************************************************************************************
//
//        File:              sToHMinAndS.cpp
//
//        Student:           Kenneth Nicholas
//
//        Assignment:        Assignment 4
//
//        Course Name:       Programming I
//
//        Course Number:     COSC 1550 - 02 
//
//        Due:               Feb 15, 2017
//
//
//        This program converts a user inputted integer value of time (i.e., in s) 
//        to its equivalent value in a format consisting of h, min and s.
//
//*******************************************************************************************************

#include <iostream>
using namespace std;

//*******************************************************************************************************

int main()
{

	const int SPERMIN = 60,                                                         // 60s = 1 min
		      MINPERH = 60,                                                         // 60 min = 1 h
		      SPERH = SPERMIN * MINPERH;                                            // 3600s = 1h

	int s,                                                                          // define: s for in,
	    hLessMinAndS,                                                               // h value part,
		minLessHAndS,                                                               // min value part,
		sLessHAndMin;                                                               // s value part

	cout << "Please enter the time duration in seconds:" << endl                    // user interface
		 << endl;                                                                   // extra spacing

	cin >> s;                                                                       // in s value
	
	hLessMinAndS = s / SPERH,                                                       // hLessMinAndS
    minLessHAndS = s % SPERH / SPERMIN,                                             // minLessHAndS
    sLessHAndMin = s % SPERMIN;                                                     // sLessHAndMin

	cout << endl                                                                    // extra spacing
		 << "The time duration is "                                                 // result interface
		 << hLessMinAndS << " hours, "                                              // h value out
		 << minLessHAndS << " minutes and "                                         // min value out
		 << sLessHAndMin << " seconds." << endl                                     // s value out
		 << endl;                                                                   // extra spacing

	return 0;                                                                       // return value
}

//*******************************************************************************************************
// Please enter the time duration in seconds:
//
// 8765
//
// The time duration is 2 hours, 26 minutes and 5 seconds.
//
// Press any key to continue . . .