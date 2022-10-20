#include <stdio.h>
#include <ctype.h>

/**
 * main - prints the alphabet in lower case
 * Return: Always 0
 */

int main(void) 
{
	for(int x = 'a'; x<'z'; x++)
	{
		char small = tolower(x);
		putchar(small);
	}
	return 0;
}
