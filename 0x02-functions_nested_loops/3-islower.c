#include "main.h"

/**
 * _islower - Checks for lowercase
 * @c: Letter
 * Return: Always 0
 */



int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		_putchar(1 + '0');
	}
	else
	{
		_putchar(0 + '0');
	}
	return (0);
}
