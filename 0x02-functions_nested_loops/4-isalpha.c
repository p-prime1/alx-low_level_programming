#include "main.h"

/**
 * _isalpha - Checks for lowercase
 * @c: Argument
 * Return: 1 or 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' || c >='A') && (c <= 'z' || c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
