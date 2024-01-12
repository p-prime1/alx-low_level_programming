#include "main.h"

/**
 * _sqrt_recursion - Finds the square root of a number
 * @n: Number to be calculated
 */

int sqrt_helper(int i,int j)
{
	int k;

	k = j;
	if ((j * j) == i)
		return (j);
	sqrt_helper(i, j + 1);
	if ((j * j) > i)
		return (-1);
	return (k);
}

int _sqrt_recursion(int n)
{
	int i = 0;
	return (sqrt_helper(n, i));
}
