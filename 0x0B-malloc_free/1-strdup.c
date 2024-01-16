#include "main.h"
/**
 * _strdup - Reserves memory and copies a string
 * @str: Str to be copied
 * Return: Returns copied string on success and NULL on error
 */

char *_strdup(char *str)
{
	char *string_copy;
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	i += 1;
	if (str == NULL)
		return (NULL);
	string_copy = malloc(sizeof(char) * i);
	if (string_copy == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		string_copy[i] = str[i];
		i++;
	}
	string_copy[i] = '\0';
	return (string_copy);
}

