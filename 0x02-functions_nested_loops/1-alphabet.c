#include "main.h"
/**
 * print_alphabet - prints the alphabet in lower case
 * Return: Always 0
 */
void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
}
