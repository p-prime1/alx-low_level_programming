#include <stdio.h>
/**
 * main - prints numbers from 1 to 10
 * Return: Always 0
 */
int main(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	putchar('\n');
	return (0);
}
