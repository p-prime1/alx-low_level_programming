#include "main.h"
/**
 * *_memset - A function to assign a constant byte.
 * @s: Pointer to be dereferenced.
 * @b: Character to be copied.
 * @n: Size of array.
 * Return: s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
