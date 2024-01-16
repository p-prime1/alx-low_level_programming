#include "main.h"

/**
 * str_concat - A function that concatenates strings
 * @s1: The first string
 * @s2: The second string
 * Return: Returns the concatenated string on success or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, j;

	i = 0;
	j = 0;
	if (s1 != NULL || s2 != NULL)
	{
		while (s1[j] != '\0')
		{
			j++;
		}
		j = 0;
		i = j;
		while (s2[j] != '\0')
		{
			j++;
		}
		i = i + j + 2;
		j = 0;
	}
	str = malloc(sizeof(char) * i);
	i = 0;
	if (str == NULL)
		return (NULL);
	while (s1[j] != '\0')
	{
		str[i] = s1[j];
		i++;
		j++;
	}
	j = 0;
	if (s2 == NULL)
		str[i] = '\0';
	else
	{
		while (s2[j] != '\0')
		{
			str[i] = s2[j];
			i++;
			j++;
		}
		str[i + 1] = '\0';
	}
	return (str);
}
