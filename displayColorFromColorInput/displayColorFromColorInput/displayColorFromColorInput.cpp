//*******************************************************************************************************
//
//        File:              displayColorFromColorInput.cpp
//
//        Student:           Kenneth Nicholas
//
//        Assignment:        In Class Assignment
//
//        Course Name:       Programming I
//
//        Course Number:     COSC 1550 - 02 
//
//        Due:               Mar 07, 2017
//
//
//        This program displays the color resulting from mixing 
//        two primary colors which are inputted by the user.
//
//*******************************************************************************************************

#include <iostream>
#include <string>
using namespace std;

//*******************************************************************************************************

int main()
{
	string primaryColorOne,
		   primaryColorTwo;

	cout << "Please enter the name of two primary colors to mix "
		 << "(e.g., red, yellow, or blue)." << endl
		 << endl;

	cin >> primaryColorOne;
	cin >> primaryColorTwo;

	if ( ( primaryColorOne == "red" && primaryColorTwo == "yellow" )
		|| ( primaryColorOne == "yellow" && primaryColorTwo == "red" ) )
	{
		cout << "The result of mixing these two primary colors is orange." << endl;
	}
	else if ( ( primaryColorOne == "red" && primaryColorTwo == "blue" )
		|| ( primaryColorOne == "blue" && primaryColorTwo == "red" ) )
	{
		cout << "The result of mixing these two primary colors is purple." << endl;
	}
	else if ( ( primaryColorOne == "yellow" && primaryColorTwo == "blue" )
		|| ( primaryColorOne == "blue" && primaryColorTwo == "yellow" ) )
	{
		cout << "The result of mixing these two primary colors is green." << endl;
	}
	else
	{
		cout << "Error! Please run the program again, and enter two primary colors "
			<< "(e.g., red, yellow, or blue)." << endl;
	}

	return 0;
}

//*******************************************************************************************************
// Please enter the name of two primary colors to mix(e.g., red, yellow, or blue).
//
// yellow
// blue
// The result of mixing these two primary colors is green.
// Press any key to continue . . .