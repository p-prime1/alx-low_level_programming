#include "main.h"

/**
 * _strlen - Length of string
 * @s: String.
 * Return: Returns c
 */

int _strlen(char *s)
{
	int c;

	for (c = 0; *s != '\0'; ++s)
	{
		++c;
	}

	return (c);
}
