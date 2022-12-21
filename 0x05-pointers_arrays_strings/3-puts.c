#include "main.h"

/**
 * _puts - Prints a string
 * @str: String
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str + '0');
		++str;
	}
	putchar('\n');
}
