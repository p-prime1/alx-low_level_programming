#include "main.h"

void print_binary(unsigned long int n)
{
	if (n == 0)
		printf("0\n");
	if (n > 1)
		print_binary(n >> 1);
	_putchar('0' + (n & 1));
}
