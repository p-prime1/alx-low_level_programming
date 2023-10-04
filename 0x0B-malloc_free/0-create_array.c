#include "main.h"

/**
 * *create_array - Allocates space for array
 * @size: Size of the array
 * @c: Charracter to assign
 * Return: Pointer
 */


char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	i = 0;
	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		p = (char *) malloc(sizeof(char) * size);
		while (i < size)
		{
			*(p + i) = c;
			i++;
		}
		*(p + i) = '\0';

	}
	return (p);
	free(p);
}
