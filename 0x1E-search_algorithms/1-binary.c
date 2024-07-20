#include "search_algos.h"

/**
 * print_array - Prints array
 * @array: Array to be printed
 * @first: First index
 * @last: Last index
 *
 */


void print_array(int *array, int first, int last)
{
	printf("Searching in array: ");
	while (first < last)
	{
		printf("%d,", array[first]);
		first++;
	}
	printf("%d\n", array[first]);
}

/**
  * binary_search - Searches a sorted array using binary search
 * @array: Sorted array
 * @size: Size of the array
 * @value: Value to be searched
 * Return: Returns index of value on success or -1 on falure
 *
 */
int binary_search(int *array, size_t size, int value)
{
	size_t middle, first_index, last_index;

	if (array == NULL)
		return (-1);
	first_index = 0;
	last_index = size - 1;
	while (first_index <= last_index)
	{
		middle = (first_index + last_index) / 2;
		print_array(array, first_index, last_index);
		if (array[middle] == value)
			return (middle);
		if (array[middle] < value)
		{
			first_index = middle + 1;
		}
		else if (array[middle] > value)
			last_index = middle - 1;
	}
	return (-1);
}
