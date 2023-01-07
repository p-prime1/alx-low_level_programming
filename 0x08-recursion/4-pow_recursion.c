#include "main.h"

/**
 * _pow_recursion - Raise to the power
 * @x: Base number
 * @y: Power
 * Return: Returns 1 or -1 or Index
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
