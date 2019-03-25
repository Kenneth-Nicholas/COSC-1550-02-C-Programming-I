#include <iostream>
using namespace std;

void displayMessage();
int getPositive();
bool isOdd(int num);
int calcSum(int num);

int main()
{
	int pnumber,
		summation;
	bool is_odd;

	displayMessage();
	pnumber = getPositive();
	is_odd = isOdd(pnumber);
	summation = calcSum(pnumber);

	if (is_odd)
		cout << "The number is odd." << endl;
	else
		cout << "The number is even." << endl;

	cout << "The summation is " << summation << endl;

	return 0;
}

void displayMessage()
{
	cout << "Welcome!" << endl;
}

int getPositive()
{
	int number;
	cin >> number;
	while (number <= 0)
	{
		cin >> number;
	}
	return number;
}

bool isOdd(int num)
{
	bool is_odd;
	if (num % 2 == 1)
		is_odd = true;
	else
		is_odd = false;

	return is_odd;
}

int calcSum(int num)
{
	int sum = 0;
	for (int i = 1; i <= num; i++)
	{
		sum = sum + i;
	}
	return sum;
}