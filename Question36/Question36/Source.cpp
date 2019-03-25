#include <iostream>
using namespace std;

void get5chars(char hold5chars[], int SIZE);
void convdigits2stars(char hold5chars[], int SIZE);
void displayresult(char hold5chars[], int SIZE);


int main()
{
	const int SIZE = 5;

	char hold5chars[SIZE];

	get5chars(hold5chars, SIZE);

	convdigits2stars(hold5chars, SIZE);

	displayresult(hold5chars, SIZE);

	return 0;
}

void get5chars(char hold5chars[], int SIZE)
{
	cout << "Please enter " << SIZE << " characters." << endl;

	for (int i = 0; i < SIZE; i++)
	{
		cin >> hold5chars[i];
	}
}

void convdigits2stars(char hold5chars[], int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		if ((hold5chars[i] >= '0') && (hold5chars[i] <= '9'))
		{
			hold5chars[i] = '*';
		}
	}
}

void displayresult(char hold5chars[], int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << hold5chars[i];
	}
}
