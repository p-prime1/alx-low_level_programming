#include "main.h"

/**
 * main - prints the alphabet in lower case
 * Return: Always 0
 */
void print_alphabet(void) 
{
	for (int x = 'a'; x < 'z'; x++)
	{
		char small = tolower(x);
		putchar(small);
	}
	return 0;
}
