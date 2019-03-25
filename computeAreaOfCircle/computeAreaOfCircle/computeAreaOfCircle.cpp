#include <iostream>
using namespace std;

//*******************************************************************************************************

double getRadius();
double computeArea(double radiusInputValue);

//*******************************************************************************************************

int main()
{
	double radius,
		   areaOfCircle;

	radius = getRadius();

	areaOfCircle = computeArea(radius);

	cout << "The area of a circle with a radius of " << radius 
		 << " has an area of " << areaOfCircle << endl;

	return 0;
}

//*******************************************************************************************************

double getRadius()
{
	double radiusInputValue;

	cin >> radiusInputValue;

	if (radiusInputValue <= 0)
	{
		cout << "Please enter a positive radius value." << endl;

		cin >> radiusInputValue;
	}

	return radiusInputValue;
}

//*******************************************************************************************************

double computeArea(double radius)
{
	const double PI = 3.14159;

	double computeArea;

	computeArea = PI * (pow(radius, 2.0));

	return computeArea;
}

//*******************************************************************************************************