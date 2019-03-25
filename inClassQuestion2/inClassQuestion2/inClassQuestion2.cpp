//*******************************************************************************************************
//
//        File:              inClassQuestion2.cpp
//
//        Student:           Kenneth Nicholas
//
//        Assignment:        In-class exercise question 2
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
	int n,
		nFactorial = 1,
		counter = 0;

	cout << "Please input a positive integer greater than 0." << endl;

	cin >> n;

	while (n <= 0)
	{
		cout << "Please input a positive integer greater than 0." << endl;

		cin >> n;
	}
	
	for (counter += 1; counter <= n; counter+= 1)
	{
		nFactorial = counter * nFactorial;

	}

	cout << nFactorial << endl;

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



