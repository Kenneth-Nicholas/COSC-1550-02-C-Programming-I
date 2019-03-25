//*******************************************************************************************************
//
//        File:              calculateBMIFromHeightMetersAndWeightKilograms.cpp
//
//        Student:           Kenneth Nicholas
//
//        Assignment:        Assignment 6
//
//        Course Name:       Programming I
//
//        Course Number:     COSC 1550 - 02 
//
//        Due:               Mar 2, 2017
//
//
//        This program asks the user to input his or her full name, height in meters, and weight in 
//        kilograms; After the user enters this data, the program then uses the user's height and weight
//        to calculate his or her BMI and then displays all of the information in a table.
//
//*******************************************************************************************************

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

//*******************************************************************************************************

int main()
{
	double heightInMeters,
		   weightInKilograms,
		   bodyMassIndex;

	string userFirstAndLastName;

	cout << "Please enter your first name followed by"
		 << " your last name separated by a space:" << endl
		 << endl;

	getline( cin , userFirstAndLastName );

	cout << endl
		 << "Please enter your height in meters:" << endl
		 << endl;

	cin >> heightInMeters;

	cout << endl
		 << "Please enter your weight in kilograms:" << endl
		 << endl;
	
    cin >> weightInKilograms;

	bodyMassIndex = weightInKilograms / (pow ( heightInMeters , 2.0 ) );

	cout << endl 
		 << setprecision( 2 ) << fixed << left 
		 << setw( 25 ) << "Name" << right 
		 << setw( 10 ) << "Height" 
		 << setw( 10 ) << "Weight" 
		 << setw( 8 ) << "BMI" << endl << left 
		 << setw( 25 ) << userFirstAndLastName << right 
		 << setw( 10 ) << heightInMeters 
		 << setw( 10 ) << weightInKilograms 
		 << setw( 8 ) << bodyMassIndex << endl
	     << endl;

	return 0;                                                        
}

//*******************************************************************************************************
// Please enter your first name followed by your last name separated by a space:
//
// Kenneth Nicholas
//
// Please enter your height in meters :
//
// 1.93
//
// Please enter your weight in kilograms :
//
// 77.11
//
// Name                         Height    Weight     BMI
// Kenneth Nicholas               1.93     77.11   20.70
//
// Press any key to continue . . .




