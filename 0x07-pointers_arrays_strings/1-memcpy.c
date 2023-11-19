#include "main.h"

/**
 * _memcpy - copies Data from one memory to another
 * @dest: Destination memory
 * @src: Source
 * @n: Number of bytes to be copied
 * Return: Returns the Address of the destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
