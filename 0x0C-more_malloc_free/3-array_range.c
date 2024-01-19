#include "main.h"

/**
 * array_range - Creates an array of integers
 * @min: Starting number
 * @max: Last number
 * Return: Return Pointer to array on SUCCESS and NULL on failure
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;

	i = 0;
	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * (max - min) + 1);
	if (ptr == NULL)
		return (NULL);
	while (min <= max)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	return (ptr);
}
