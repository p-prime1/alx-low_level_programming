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
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar(n + '0');
		return (0);
	}
	else
	{
		putchar('-');
		return (-1);
	}
