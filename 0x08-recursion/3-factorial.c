#include "main.h"

/**
 * factorial - Find the factorial of n.
 * @n: Number to be chexked
 * Return: Return -1 or 1 or factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
