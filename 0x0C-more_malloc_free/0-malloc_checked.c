#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc
 * @b: Size of memory to be allocated in bytes
 * Return: Returns the memory address of exit with a status 98 on failure
 */

void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
