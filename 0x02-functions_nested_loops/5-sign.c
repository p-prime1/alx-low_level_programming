#include "main.h"

/**
 * print_sign(int n)- checks for positive or negative
 * @n: Int;
 * Return: returns positive or negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar(n + '0');
	}
	else
	{
		return (-1);
		_putchar('-');
	}
}
