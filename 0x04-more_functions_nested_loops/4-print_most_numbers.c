#include "main.h"

/**
 * print_numbers - print 0 - 9
 * Return: Return 0.
 */

void print_numbers(void)
{
	for (i = 0; i <= 9; i++)
	{
		if( i == 2 || i == 4)
		{
			continue;
		}
		else
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
