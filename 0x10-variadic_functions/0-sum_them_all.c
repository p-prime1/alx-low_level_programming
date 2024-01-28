#include "variadic_functions.h"
/**
 * sum_them_all - A finction that sums all arguments
 * @n: First arguments
 * Return: Returns sum of arguments on success or 0 on failure
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, j, sum;
	va_list args;

	i = 0;
	sum = 0;
	if (n == 0)
		return (0);
	va_start(args, n);
	for (; i < n; i++)
	{
		j = va_arg(args, int);
		sum = sum + j;
	}
	va_end(args);
	return (sum);
}
