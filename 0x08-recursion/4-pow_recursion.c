#include "main.h"

/**
 * _pow_recursion - Finds the power of a number
 * @x: Number to be calculated
 * @y: Power to be raised to
 * Return: Returns -1 if y is less then 0 or the ower
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * (_pow_recursion(x, y - 1)));
}
