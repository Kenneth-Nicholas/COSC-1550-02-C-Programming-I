//*******************************************************************************************************
//
//		File:			ComputeYourGPA.cpp
//		
//		Student:		Kenneth Nicholas
//
//		Assignment:	 	Assignment 12	
//
//		Course Name:	Programming I 
//
//		Course Number:	COSC 1550 - 02
//
//		Due:			Apr 27, 2017
//
//
//		This program asks the user to input the credits and grades of 4 courses
//		and displays the GPA.
//		
//*******************************************************************************************************

#include <iostream>  
#include <iomanip>
using namespace std;            

//*******************************************************************************************************

void get_data(int, double [], double []);                  
double compute_GPA(int, double [], double []);              
void display_GPA(double);              

//*******************************************************************************************************

int main()                     
{
	const int SIZEOFARRAYS = 4;
	
	double creditHours[SIZEOFARRAYS],
		   gradeForCourse[SIZEOFARRAYS],
		   calculatedGPA;

	get_data(SIZEOFARRAYS, creditHours, gradeForCourse);

	calculatedGPA = compute_GPA(SIZEOFARRAYS, creditHours, gradeForCourse);

	display_GPA(calculatedGPA);

	return 0;
}

//*******************************************************************************************************

void get_data(int SIZEOFARRAYS, double creditHours[], double gradeForCourse[])                   
{
	for (int i = 0; i < SIZEOFARRAYS; i++)
	{
		cout << "Please enter the credit hours and the grade for Course #" 
			 << i + 1 << ":" << endl;

		cin >> creditHours[i] >> gradeForCourse[i];

		if (creditHours[i] <= 0)
		{
			cout << "Please enter a positive number when entering "
				 << "the amount of credit hours for a course." << endl;

			cin >> creditHours[i];
		}
		if (gradeForCourse[i] < 0)
		{
			cout << "Please enter a positive number when entering "
				 << "the grade for a course." << endl;

			cin >> gradeForCourse[i];
		}
	}
}

//*******************************************************************************************************

double compute_GPA(int SIZEOFARRAYS, double creditHours[], double gradeForCourse[])
{
	double numeratorForGPACalculation = 0,
		   denominatorForGPACalculation = 0,
		   calculatedGPA;
		  
	for (int i = 0; i < SIZEOFARRAYS; i++)
	{
		numeratorForGPACalculation += creditHours[i] * gradeForCourse[i];
	
		denominatorForGPACalculation += creditHours[i];
	}

	calculatedGPA = numeratorForGPACalculation / denominatorForGPACalculation;

	return calculatedGPA;
}

//*******************************************************************************************************

void display_GPA(double calculatedGPA)
{
	cout << "Your GPA is " << showpoint 
		 << setprecision(3) << calculatedGPA << endl;
}

//*******************************************************************************************************
//Please enter the credit hours and the grade of Course #1:
//1 4
//Please enter the credit hours and the grade of Course #2:
//3 3.75
//Please enter the credit hours and the grade of Course #3:
//1.5 2.5
//Please enter the credit hours and the grade of Course #4:
//2.5 3.5
//Your GPA is 3.47
