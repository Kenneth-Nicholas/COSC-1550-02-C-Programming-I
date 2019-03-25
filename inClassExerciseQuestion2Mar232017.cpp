#include <iostream>
using namespace std;

int main()
{
	int number,
		factorial = 1;

	cout << "Please input a positive integer:" << endl;
	cin >> number;

	if (number <= 0)
	{
		cout << "Error." << endl;
	}
	else
	{
		for (int counter = 1; counter >= number; counter++)
		{
				factorial *= counter;
		}
		cout << "The factorial is " << factorial << endl;
	}

	return 0;
}