//*******************************************************************************************************
//
//        File:              solvingMathematicalExpressionsUsingNestedForLoops.cpp
//
//        Student:           Kenneth Nicholas
//
//        Assignment:        Assignment 9
//
//        Course Name:       Programming I
//
//        Course Number:     COSC 1550 - 02 
//
//        Due:               Apr 6, 2017
//
//
//        This program calculates the values of x and y that make the expression 
//        (x-4)^3 + (y-7)^3 > 0 true and displays the corresponding x and y values
//        on the screen.
//
//*******************************************************************************************************

#include <iostream>
#include <cmath>
using namespace std;

//*******************************************************************************************************

int main()
{
	double x,
		   y;

	for (x = 1.0; (x >= 1) && (x <= 8); x++)
	{

		for (y = 0; (y >= 0) && (y <= 10); y++)
		{

			if (pow(x - 4.0, 3.0) + pow(y - 7.0, 3.0) > 0)
			{
				
				cout << "x = " << x << ", y = " << y << " will make the expression positive." << endl;

			}

		}

	}

	return 0;
}
//*******************************************************************************************************
// x = 2, y = 10 will make the expression positive.
// x = 3, y = 9 will make the expression positive.
// x = 3, y = 10 will make the expression positive.
// x = 4, y = 8 will make the expression positive.
// x = 4, y = 9 will make the expression positive.
// x = 4, y = 10 will make the expression positive.
// x = 5, y = 7 will make the expression positive.
// x = 5, y = 8 will make the expression positive.
// x = 5, y = 9 will make the expression positive.
// x = 5, y = 10 will make the expression positive.
// x = 6, y = 6 will make the expression positive.
// x = 6, y = 7 will make the expression positive.
// x = 6, y = 8 will make the expression positive.
// x = 6, y = 9 will make the expression positive.
// x = 6, y = 10 will make the expression positive.
// x = 7, y = 5 will make the expression positive.
// x = 7, y = 6 will make the expression positive.
// x = 7, y = 7 will make the expression positive.
// x = 7, y = 8 will make the expression positive.
// x = 7, y = 9 will make the expression positive.
// x = 7, y = 10 will make the expression positive.
// x = 8, y = 4 will make the expression positive.
// x = 8, y = 5 will make the expression positive.
// x = 8, y = 6 will make the expression positive.
// x = 8, y = 7 will make the expression positive.
// x = 8, y = 8 will make the expression positive.
// x = 8, y = 9 will make the expression positive.
// x = 8, y = 10 will make the expression positive.
// Press any key to continue . . .