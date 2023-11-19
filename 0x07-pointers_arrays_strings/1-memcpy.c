#include "main.h"

/**
 * _memcpy - copies Data from one memory to another
 * @dest: Destination memory
 * @src: Source 
 *@n: Number of bytes to be copied
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i, j;

	i = 0;
	j = 0;

	while (i <= n)
	{
		dest[j] = src[j];
		j++;
		i++;
	}
	return (dest);
}
