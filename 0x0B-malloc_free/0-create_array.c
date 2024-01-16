#include "main.h"

/**
 * create_array - Creates an array
 * @size: Size of array to be created
 * @c: Character to be assigned to the array
 * Return: Returns array of NULL
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	i = 0;
	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
