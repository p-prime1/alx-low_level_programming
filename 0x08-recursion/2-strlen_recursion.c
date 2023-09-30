#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - returns the lenght of a sting
 * @s: Pointer to string
 * Return: Number
 */

int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		i++;
		return (1 + (_strlen_recursion(s + 1)));
	}
}
