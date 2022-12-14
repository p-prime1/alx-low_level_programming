#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10x
 */
void print_alphabet_x10(void)
{
	int x;
	int i;

	x = 1;
	while (x <= 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			putchar(i);
		}
		putchar('\n');
		x++;
	}
}

