#include "main.h"

/**
 * _islower - Checks for lowercase
 * @c: Letter
 * Return: Always 0
 */



int _islower(int c)
{
	int i;
	int j;

	for (j = 'A'; j <= 'Z'; j++)
	{
		if (c == j)
		{
			_putchar(0 + '0');
			break;
		}
		else
		{
			continue;
		}
	}

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		{
			_putchar(1 + '0');
			break;
		}
		else
		{
			continue;
		}
	}
	_putchar('\n');
	return (0);
}
