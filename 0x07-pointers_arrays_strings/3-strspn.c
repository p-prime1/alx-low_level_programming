#include "main.h"

/**
 * _strspn - Searches for a char in a string
 * @s: String containing the character to be searched for
 * @accept: String to be serched
 * Return: Number of occurences of strings
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int counter;
	int i, j;

	counter = 0;

	i = 0;
	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				counter += 1;
				break;
			}
		}
		if (accept[j] == '\0')
			break;
		i++;
	}
	return (counter);
}


