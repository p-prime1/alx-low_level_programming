#include "main.h"

/**
 * _puts_recursion - Prints alphabet
 * @s: First pointer
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	_putchar('\n');
}
