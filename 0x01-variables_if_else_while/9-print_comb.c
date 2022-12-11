#include <stdio.h>
/**
 * main - Print numbers and other characters
 * Return: Always 0
 */
int main(void)
{
	int n;
	int c;
	int s;

	for (n = 0, c = ',', s = ' '; n <= 9; n++)
	{
		putchar(n + '0');
		putchar(c);
		putchar(s);
	}
	putchar('\n');
	return (0);
}
