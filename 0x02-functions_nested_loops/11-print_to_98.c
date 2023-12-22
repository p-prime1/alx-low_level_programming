#include "main.h"
/**
 * print_to_98 - prints number to 98
 * @n: Number to start printing from
 */

void print_to_98(int n)
{
	while (n < 98)
	{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
		n++;
	}
	_putchar(n + '0');
	_putchar('\n');
}

