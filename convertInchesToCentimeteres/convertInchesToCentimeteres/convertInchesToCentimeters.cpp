//*******************************************************************************************************
//
//        File:              convertInchesToCentimeters.cpp
//
//        Student:           Kenneth Nicholas
//
//        Assignment:        Assignment 3
//
//        Course Name:       Programming I
//
//        Course Number:     COSC 1550 - 02 
//
//        Due:               Feb 07, 2017
//
//
//        This program displays a value in centimeters after converting a user 
//        inputted value (i.e., in inches) to it's equivalent value in centimeters.
//
//*******************************************************************************************************

#include <iostream>
using namespace std;

//*******************************************************************************************************

int main()
{
	const double centimetersPerInch = 2.54;

	double xInches;

	cout << "Please enter the length in inches" << endl
		 << endl;

	cin >> xInches;

	double xCentimeters = xInches * centimetersPerInch;

	cout << endl
		 << "The length in cm is " << xCentimeters << endl
		 << endl;

	return 0;
}

//*******************************************************************************************************
// 1>------Rebuild All started : Project : convertInchesToCentimeteres, Configuration : Debug Win32------
// 1>  convertInchesToCentimeters.cpp
// 1>  convertInchesToCentimeteres.vcxproj->C:\Users\Admin\Desktop\convertInchesToCentimeteres\Debug\convertInchesToCentimeteres.exe
// == == == == == Rebuild All : 1 succeeded, 0 failed, 0 skipped == == == == ==
//*******************************************************************************************************
