#include <stdio.h>
/**
 * main - Prints base 16 nummbers
 * Return: Always 0
 */
int main(void)
{
	int n;
	int a;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0');
	}
	for (a = 'a'; a < 'g'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
