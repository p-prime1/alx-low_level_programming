#include "main.h"

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
		p = (char*) malloc(sizeof(char) * size);
		while (i < size)
		{
			*(p + i) = c;
			i++;
		}
		*(p + i) = '\0';

	}
	return (p);
}
