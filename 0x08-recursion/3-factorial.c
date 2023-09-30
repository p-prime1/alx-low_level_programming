#include "main.h"

/**
 * factorial - Prints factorial
 * @n: Nummber to multiply
 * Return: Returns 0 -1 or factorial
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

