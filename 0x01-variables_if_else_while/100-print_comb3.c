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

	for (n = 01, c = ',', s = ' '; n <= 90; n++)
	{
		putchar(n + '0');
		if (n == 9)
		{
			break;
		}
		else
		{
		putchar(c);
		}
		putchar(s);
	}
	putchar('\n');
	return (0);
}
