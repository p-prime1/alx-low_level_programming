#include <stdio.h>
/**
 * main - Prints alphabet backwards
 * Return: Always 0
 */
int main(void)
{
	int n;

	n = 'z';
	while (n >= 'a')
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
