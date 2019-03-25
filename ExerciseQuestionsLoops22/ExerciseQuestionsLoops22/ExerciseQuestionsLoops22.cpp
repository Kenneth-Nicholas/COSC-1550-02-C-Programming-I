#include <iostream>
using namespace std;

int main()
{
	int x = 0,
		y = 0;

	for ( ; x * x + y * y + -30 * x - 80 * y + 1700 == 0; x++)
	{
		for ( ; x * x + y * y + -30 * x - 80 * y + 1700 == 0; y++)
		{
			if (x < 100 && x >= 0)
			{
				cout << "x = " << x << endl;
			}
			if (y < 100 && y >= 0)
			{
				cout << "y = " << y << endl;
			}
		}
	}

	return 0;
}




	