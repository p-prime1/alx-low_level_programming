#include "main.h"

/**
 * _islower - Checks for lowercase
 * @c: Argument
 * Return: 1 or 0
 */

int _islower(int c)
{
	if (islower(c) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
