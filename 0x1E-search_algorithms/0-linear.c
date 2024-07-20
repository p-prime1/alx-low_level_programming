#include "search_algos.h"

/**
 * linear_search - Searches an array linearly
 * @array: Array to be searched
 * @size: Size of the array
 * @value: Value to be searched
 * Return: Returns index of the value on success or -1 on failure
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	i = 0;
	while (i < size)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
