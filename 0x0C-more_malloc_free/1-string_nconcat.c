#include "main.h"

/**
 * string_nconcat - Concatenates two strings
 * @s1: First string
 * @s2: Second string to concatenate
 * @n: Number of bytes to be copied from s2
 * Return: Return NULL on failure or memory of the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j;

	i = 0;
	j = 0;
	ptr = malloc(sizeof(char) * ((sizeof(s1) - 1) + n));
	if (s1 != NULL)
	{
		while (s1[i] != '\0')
		{
			ptr[i] = s1[i];
			i++;
		}
	}
	if (s2 != NULL)
	{
		while (j < n)
		{
			ptr[i] = s2[j];
			i++;
			j++;
		}
		ptr[i] = '\0';
	}
	return (ptr);
}

