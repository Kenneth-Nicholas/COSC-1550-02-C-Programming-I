#include <iostream>
using namespace std;

void get3numbers(int &a, int &b, int &c);
int findMax(int x, int y, int z);

int main()
{
	int n1,
		n2,
		n3;

	get3numbers(n1, n2, n3);
	cout << "The max of the 3 numbers is " << findMax(n1, n2, n3) << endl;

	return 0;
}

void get3numbers(int &a, int &b, int &c)
{
	cout << "Enter 3 numbers:" << endl;
	cin >> a >> b >> c;
}

int findMax(int x, int y, int z)
{
	int max;

	if ((x >= y) && (x >= z))
		max = x;
	else if ((y >= x) && (y >= z))
		max = y;
	else
		max = z;

	return max;
}