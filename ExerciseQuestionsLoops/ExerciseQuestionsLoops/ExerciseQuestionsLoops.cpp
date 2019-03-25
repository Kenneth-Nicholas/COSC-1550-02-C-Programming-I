#include <iostream>
#include <string>
using namespace std;

int main()
{
	string userInput;

	cout << "Please enter a string." << endl;

	getline(cin, userInput);

	while (userInput != "You are shocked!")
	{
		cout << "Incorrect string input. Please enter another string." << endl;

		getline(cin, userInput);
	}

	return 0;

}