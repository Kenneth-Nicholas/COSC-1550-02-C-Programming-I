//*******************************************************************************************************
//
//		File:			CountTimesBallBounces.cpp
//		
//		Student:		Kenneth Nicholas
//
//		Assignment:	 	Assignment 10	
//
//		Course Name:	Programming I 
//
//		Course Number:	COSC 1550 - XX
//
//		Due:			Apr 15, 2017
//
//
//		This program asks the user to input the height of the ball,
//		and counts how many times the ball will hit the floor.
//		
//*******************************************************************************************************

#include <iostream>             
using namespace std;            

//*******************************************************************************************************

double get_height();            
double compute_bounce_height(double height);     
int count_times_bounced(double height);       

//*******************************************************************************************************

int main()                      
{
    double height;

    int times_bounced;

    height = get_height();

    times_bounced = count_times_bounced(height);

    cout << "The ball will hit the floor " << times_bounced << " time(s)." << endl;

    return 0;

}

//*******************************************************************************************************

double get_height()             // Complete your functions
{
	double height;

	cout << "What is the initial height of the ball?" << endl;

	cin >> height;

	while (height <= 0)
	{
		cout << "Please enter a positive number. Try again:" << endl;

		cin >> height;
	}

	return height;

}

//*******************************************************************************************************

double compute_bounce_height(double height)
{
	double heightTwo,
		   heightAfterBounce;

	const double THREEFOURTHS = 0.75;

	const int FORSUBTRACTINGTWO = 2;

	heightAfterBounce = (THREEFOURTHS * height) - FORSUBTRACTINGTWO;

	return heightAfterBounce;

}

//*******************************************************************************************************

int count_times_bounced(double heightThree)
{
	int timesBallHitsFloor = 0;

	for ( ; heightThree > 0; timesBallHitsFloor++)
	{
		heightThree = compute_bounce_height(heightThree);
	}

	return timesBallHitsFloor;

}

//*******************************************************************************************************
//What is the initial height of the ball?
//-1
//Please enter a positive number. Try again:
//8
//The ball will hit the floor 3 time(s).
