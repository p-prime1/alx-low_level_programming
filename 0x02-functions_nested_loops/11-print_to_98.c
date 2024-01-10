#include "main.h"
/**
 * print_to_98 - prints number to 98
 * @n: Number to start printing from
 */

void print_to_98(int n)
{
	while (n < 98)
	{
		if (n <= 9)
		{
			putchar(n + '0');
		}
		else
		{
			write(1, &n, 1);
		}
		putchar(',');
		putchar(' ');
		n++;
	}
	putchar(n + '0');
	putchar('\n');
}
int main(void)
{
    print_to_98(0);
    print_to_98(98);
    print_to_98(111);
    print_to_98(81);
    print_to_98(-10);
    return (0);
}

