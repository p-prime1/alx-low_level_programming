#include "main.h"

char *_strcat(char *dest, char *src)
{
	int j;
	int i;

	j = strlen(dest);
	//Loop to remove the last '\0' character
	for (i = 0; dest[i] != '\0'; i++)
	{
		dest[i] = dest[dest[i] + i];
	}
	for (i = 0; src[i] = '\0'; i++)
	{
		dest[j] = src[i];
	}
}
int main(void)
{
	*_strcat("Hello", "world");
	return (0);
}
