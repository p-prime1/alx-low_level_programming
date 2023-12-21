#include "main.h"

/**
 * print_last_digit - Prints last digit
 * @r: Value
 * Return: Always 0;
 */

int print_last_digit(int r)
{

	int n;

	if (r < 0)
		r = r * -1;
	n = r % 10;
	return (n);
}
