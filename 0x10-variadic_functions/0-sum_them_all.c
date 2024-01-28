#include "variadic_functions.h"

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
