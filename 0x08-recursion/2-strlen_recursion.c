#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - returns the lenght of a sting
 * @s: Pointer to string
 * Return: Number
 */

int _strlen_recursion(char *s)
{
	int i;

	i = 1;
	if (*s == '\0')
	{
		return (i);
	}
	else
	{
		i++;
		return (1 + (_strlen_recursion(s + 1)));
	}
}
