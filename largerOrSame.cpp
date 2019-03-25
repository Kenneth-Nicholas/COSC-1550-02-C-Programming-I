//*******************************************************************************************************
//
//        File:              largerOrSame.cpp
//
//        Student:           Kenneth Nicholas
//
//        Assignment:        In Class Assignment
//
//        Course Name:       Programming I
//
//        Course Number:     COSC 1550 - 02 
//
//        Due:               Feb 27, 2017
//
//
//        This program 
//
//*******************************************************************************************************

#include <iostream>
using namespace std;

//*******************************************************************************************************

int main()
{
	double x,
		y;

	cout << "Please enter two numbers:" << endl;

	cin >> x >> y;

	if (x > y)
	{
		cout << x << " is greater than " << y << endl;
	}
	else if (x < y)
	{
		cout << y << " is greater than " << x << endl;
	}
	else
	{
		cout << x << " is equal to " << y << endl;
	}
	return 0;
}
//*******************************************************************************************************
// Please enter the length in inches
//
// 10
//
// The length in cm is 25.4
//
// Press any key to continue . . .
