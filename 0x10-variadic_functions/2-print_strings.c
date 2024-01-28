#include "variadic_functions.h"

/**
 * print_strings - Prints strings passded to it
 * @seperator: Seperator between the strings
 * @n: Number of strings passed
 */

void print_strings(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(args, char*));
		if (seperator && i != n - 1)
			printf("%s", seperator);
	}
	printf("\n");
	va_end(args);
}
