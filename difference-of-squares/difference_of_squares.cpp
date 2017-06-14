#include <math.h>
#include "difference_of_squares.h"
using namespace std;

int squares::square_of_sums(int a)
{
	int sum;
	for (int i = 1; i <= a; ++i)
	{
		sum += i;
	}
	return pow(sum, 2);
}

int squares::sum_of_squares(int b)
{
	int sum = 0;
	for (int i = 1; i <= b; ++i)
	{
		// cout << pow(j, 2) << endl;
		sum += pow(i, 2);
	}
	return sum;
}

int squares::difference(int c)
{
	int diff = 0;
	diff = squares::square_of_sums(c) - squares::sum_of_squares(c);
	return diff;
}
