#include "main.h"
/**
 * _puts_recursion - A finction
 * @s: A pointer
 */

void print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_print_rev_recursion(s - 1);
	}
	else if(*s == 0)
	{
		_putchar('\n');
	}
}
int main(void)
{
    _print_rev_recursion("\nColton Walker");
    return (0);
}
