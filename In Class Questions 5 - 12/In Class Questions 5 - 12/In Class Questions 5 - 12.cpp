//*******************************************************************************************************
//
//		File:			In Class Questions 5 - 12.cpp
//		
//		Student:		Kenneth Nicholas
//
//		Assignment:	 	In Class Questions 5 - 12	
//
//		Course Name:	Programming I 
//
//		Course Number:	COSC 1550 - 02
//
//		Due:			May 2, 2017
//
//
//		This program...
//		
//*******************************************************************************************************

#include <iostream>  
using namespace std;            

//*******************************************************************************************************
  
bool isSame_1();
bool isSame_2(char, char);
float compute_Value();
float compute_Value2(float, float, float);
void get3numbers(float &, float &, float &);
float computeExp(float, float, float);
void get3numbers2(float &, float &, float &);
float computeExp2();

//*******************************************************************************************************

int main()
{
	char x,
		 y;

	bool same,
		 same2;

	float xnum,
		  ynum,
		  znum,
		  totalComputedValue,
		  a,
		  b,
		  c,
		  computedExpResults,
		  computedExpResults2;

	cout << "Enter 2 characters, separated by a space:" << endl;
	cin >> x >> y;

	same = isSame_2(x, y);

	same2 = isSame_1();

	cout << "The computed value of x * (x + 1) + y * y + z * (z - 1) = " << compute_Value() << endl;

	cout << "Please enter three floating point numbers." << endl;

	cin >> x >> y >> z;

	totalComputedValue = compute_Value2(x, y, z);

	get3numbers(a, b, c);

	computedExpResults = computeExp(a, b, c);

	cout << "The computed value of x * (x + 1) + y * y + z * (z - 1) = " << computedExpResults << endl;

	computedExpResults = computeExp2();

	return 0;
}

//*******************************************************************************************************

bool isSame_1()
{
	bool tOrF;

	char characterOne,
		 characterTwo;

	cout << "Please enter two characters." << endl
		 << endl;

	cin >> characterOne >> characterTwo;

	if (characterOne == characterTwo)
	{
		bool tOrF = true;
	}
	else
	{
		bool tOrF = false;
	}

	return tOrF;
}

//*******************************************************************************************************

bool isSame_2(char characterOne, char characterTwo)
{
	bool tOrF2;

	if (characterOne == characterTwo)
	{
		bool tOrF2 = true;
	}
	else
	{
		bool tOrF2 = false;
	}

	return tOrF2;
}

//*******************************************************************************************************

float compute_Value()
{
	float x,
		y,
		z,
		totalComputedValue;

	cout << "Please enter three floating point numbers." << endl;

	cin >> x >> y >> z;

	totalComputedValue = x * (x + 1) + y * y + z * (z - 1);

	return totalComputedValue;
}

//*******************************************************************************************************

float compute_Value2(float x, float y, float z)
{
	float totalComputedValue2;

	float totalComputedValue2 = x * (x + 1) + y * y + z * (z - 1);

	return totalComputedValue2;
}

//*******************************************************************************************************

void get3numbers(float & a, float & b, float & c)
{
	cout << "Please enter three floating point numbers." << endl;

	cin >> a >> b >> c;
}

//*******************************************************************************************************

float computeExp(float a, float b, float c)
{
	float computedExpResults;

	computedExpResults = a * (a + 1) + b * b + c * (c - 1);

	return computedExpResults;
}

//*******************************************************************************************************

void get3numbers2(float & d, float & e, float & f)
{
	cout << "Please enter three floating point numbers." << endl;

	cin >> d >> e >> f;
}

//*******************************************************************************************************

float computeExp2()
{
	float d,
		  e,
		  f,
		  computedExpResults2;

	get3numbers2(d, e, f);

	computedExpResults2 = d * (d + 1) + e * e + f * (f - 1);

	return computedExpResults2;
}

//*******************************************************************************************************
//