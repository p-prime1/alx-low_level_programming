#include "main.h"
/**
 * factorial - Returns the factorial of number
 * @n: Number to be calculated
 * Return: Returns -1 or 1 or factorial of the number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
