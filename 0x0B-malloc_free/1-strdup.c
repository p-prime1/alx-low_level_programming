#include "main.h"

/**
 * *_strdup - Copies a string
 * @*str: Parameter
 * Return: Pointer
 */

char *_strdup(char *str)
{
	unsigned int i, len;
	char *p;

	i = 0;
	len = 0;
	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	len+= 1;

	p = (char *) malloc(sizeof(char) * len);
	while (str[i] != '\0')
	{
		p[i] = str[i];
		i++;
	}
	p[i + 1] = '\0';
	return (p);
	free(p);
}
