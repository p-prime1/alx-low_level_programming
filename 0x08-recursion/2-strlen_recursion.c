#include "main.h"
/*
 * _strlen_recursion - recursive function.
 * @s: String ointer
 * Return: Always 0
 */

int _strlen_recursion(char *s)
{

	if (*s == '\0')
		_putchar('\n');
	else
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
