#include <stdio.h>
/**
 * main - Print alphabet
 * Return: Always 0
 */
int main(void)
{
	int n;
	int d;

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}
	for (d = 'A'; d <= 'Z'; d++)
	{
		putchar(d);
	}
	putchar('\n');
	return (0);
}
