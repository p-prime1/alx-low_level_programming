#include "main.h"
/*
 * _strlen_recursion - Recursion to count length of stirng
 * @s: String ointer
 */

int _strlen_recursion(char *s)
{

	if (*s == '\0')
		_putchar('\n');
	else
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
