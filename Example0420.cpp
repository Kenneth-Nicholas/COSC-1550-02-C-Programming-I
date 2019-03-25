#include <iostream>
using namespace std;

float computeSum(const float a[], int size);
void getArray(float a[], int size);

int main()
{
	const int SIZE = 5;
	float numbers[SIZE],
		  sum = 0.0,
		  avg,
		  max,
		  unitcost[SIZE] = {1.99, 0.99, 3.99, 4.99, 1.49},
		  totalprice = 0.0;
	int maxindex = 0,
		quantity[SIZE] = {5, 4, 0, 1, 3};

	getArray(numbers, SIZE);            // arrays are always passed by reference
	sum = computeSum(numbers, SIZE);
	avg = sum / SIZE;

	cout << "Sum is " << sum << endl;
	cout << "Average is " << avg << endl;

	max = numbers[0];
    maxindex = 0;
	for (int i = 1; i < SIZE; i++)      // This is how we find the max or the min
	{                                   // of an array.
		if (numbers[i] > max)
		{
			max = numbers[i];
			maxindex = i;
		}
	}
	cout << "Maximum is " << max << endl;
	cout << "Index of maximum is " << maxindex << endl;

	for (int i = 0; i < SIZE; i++)      // Processing parallel arrays
	{
		totalprice = totalprice + unitcost[i] * quantity[i];
	}
	cout << "The total price is " << totalprice << endl;

	return 0;
}

float computeSum(const float a[], int size)
{
	float sum = 0.0;
	for (int i = 0; i < size; i++)
	{
		sum += a[i];
	}
	return sum;
}

void getArray(float a[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cin >> a[i];
	}
}