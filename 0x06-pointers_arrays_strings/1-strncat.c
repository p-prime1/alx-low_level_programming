#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
	int i;

	dest_len = strlen(dest);
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
	       dest[dest_len +i] = src[i];
	}
	dest[dest_len +1] = '\0';

	return dest;
}
		
