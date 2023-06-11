#include "main.h"
/**
 * _puts_recursion - A finction
 * @s: A pointer
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
int main(void)
{
    _print_rev_recursion("\nColton Walker");
    return (0);
}
