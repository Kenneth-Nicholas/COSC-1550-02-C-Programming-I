#include <iostream>
using namespace std;

void get_nums(int numholder[], int SIZEOF);
int calc_total_of_pos_nums(int numholder[], int SIZEOF);
void display_total_of_pos_nums(int posNumTotal);

int main()
{
	const int SIZEOF = 7;

	int numholder[SIZEOF],
		posNumTotal;

	get_nums(numholder, SIZEOF);

	posNumTotal = calc_total_of_pos_nums(numholder, SIZEOF);

	display_total_of_pos_nums(posNumTotal);

	return 0;
}

void get_nums(int numholder[], int SIZEOF)
{
	for (int i = 0; i < SIZEOF; i++)
	{
		cout << "Please enter a whole number." << endl;

		cin >> numholder[i];
	}
}

int calc_total_of_pos_nums(int numholder[], int SIZEOF)
{
	int posNumTotal = 0;

	for (int i = 0; i < SIZEOF; i++)
	{
		if (numholder[i] > 0)
		{
			posNumTotal += numholder[i];
		}
	}
	return posNumTotal;
}

void display_total_of_pos_nums(int posNumTotal)
{
	cout << "The total of the positive numbers you entered is "
		 << posNumTotal << endl;
}