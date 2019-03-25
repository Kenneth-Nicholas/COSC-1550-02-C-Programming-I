//*******************************************************************************************************
//
//        File:              inClassQuestions.cpp
//
//        Student:           Kenneth Nicholas
//
//        Assignment:        In-class exercise questions 3/23/2017
//
//        Course Name:       Programming I
//
//        Course Number:     COSC 1550 - 02 
//
//        Due:               Mar 23, 2017
//
//
//        This program...
//
//*******************************************************************************************************

#include <iostream>
using namespace std;

//*******************************************************************************************************

int main()
{
	char userInputUpperCaseLetter,
		 outputLowerCaseLetter;

	cout << "Please input an uppercase letter." << endl;

	cin >> userInputUpperCaseLetter;

	while (userInputUpperCaseLetter < 'A' || userInputUpperCaseLetter > 'Z')
	{
		cout << "Please input an uppercase letter." << endl;

		cin >> userInputUpperCaseLetter;
	}

	if (userInputUpperCaseLetter >= 'A' && userInputUpperCaseLetter <= 'Z')
	{
		outputLowerCaseLetter = userInputUpperCaseLetter + 32;

		cout << outputLowerCaseLetter << endl;
	}

	return 0;                                                        
}

//*******************************************************************************************************
//
//
//
//
//
//
//



