//*******************************************************************************************************
//
//        File:              volumeOfSphereFromRadius.cpp
//
//        Student:           Kenneth Nicholas
//
//        Assignment:        Assignment 5
//
//        Course Name:       Programming I
//
//        Course Number:     COSC 1550 - 02 
//
//        Due:               Feb 18, 2017
//
//
//        This program first asks for a user to input the value of a sphere's radius; Once a user 
//        inputs this value, the program then uses the sphere's radius value to calculate the 
//        volume of the sphere and displays the volume of the sphere in command prompt.
//
//*******************************************************************************************************

#include <iostream>
using namespace std;

//*******************************************************************************************************

int main()
{
	const double PI = 3.14159,                                                      // PI truncated
		         FOURTHIRDS = (4.0 / 3.0);                                          // const from formula

	double radiusOfSphere,                                                          // def for user in
		   volumeOfSphere;                                                          // def for result

	cout << "Please input the radius of the sphere:" << endl                        // user interface
		 << endl;                                                                   // extra spacing

	cin >> radiusOfSphere;                                                          // get user in

	volumeOfSphere = FOURTHIRDS *PI * pow( radiusOfSphere , 3.0 );                  // calculate V

	cout << endl                                                                    // extra spacing
		 << "The volume of the sphere is " << volumeOfSphere << endl                // display V
		 << endl;                                                                   // extra spacing
		
	return 0;                                                                       // return
}

//*******************************************************************************************************
// Please input the radius of the sphere:
//
// 1.5
//
// The volume of the sphere is 14.1372
//
// Press any key to continue . . .
