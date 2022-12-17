#include "main.h"

/**
 * print_numbers - print 0 - 9
 * Return: Return 0.
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if( i == 2 || i == 4)
		{
			continue;
		}
		else
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
