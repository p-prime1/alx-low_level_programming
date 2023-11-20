#include "main.h"

/**
 * _strpbrk - Function that searches for a char andreturns ar
 * @s: String been checked
 * @accept: Dtring we are dearching through
 * Return: Returns null
 */

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
				return (s);
		}
		s++;
	}

	return (NULL);
}
