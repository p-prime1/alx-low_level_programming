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
	unsigned int i = 0, j = 0, k = 0, l = 0;

	while (s1[l] != '\0')
		l++;
	while (s2[k] != '\0')
		k++;
	str = malloc(sizeof(char) * (l + k + 1));
	if (str == NULL)
		return (NULL);
	if (s1)
	{
		while (s1[i] != '\0')
		{
			str[i] = s1[i];
			i++;
		}
	}
	if (s2)
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
