#include "main.h"
#include <stdio.h>

int fat(int n)
{
	if (n == 1)
	{
		return (1);
	}
	return (n * fat(n - 1));
}

int main ()
{
	int n;
	int i;
	i = 7;
	_putchar((fat(5)) + '0');
	_putchar('\n');
	return (0);
}

