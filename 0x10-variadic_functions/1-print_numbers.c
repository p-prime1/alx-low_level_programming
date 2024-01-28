#include "variadic_functions.h"

/**
 * print_numbers - Prints number passed as arguments
 * @seperator: Char to seperate numbers
 * @n: Number of args passed
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	int x;
	va_list args;

	va_start(args, n);

	if (seperator == NULL)
	{
		for (i = 0; i < n; i++)
		{
			x = va_arg(args, int);
			printf("%d ", x);
		}
		printf("\n");
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			x = va_arg(args, int);
			printf("%d", x);
			if (i != (n - 1))
				printf("%c ", *seperator);
		}
		printf("\n");
	}
	va_end(args);
}
