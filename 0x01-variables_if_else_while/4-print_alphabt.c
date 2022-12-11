#include <stdio.h>
/**
 * main - Print alphabet
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		if (n == 'e' || n == 'q')
		{
			continue;
		}
		else
		{
			putchar(n);
		}
	}
	putchar('\n');
	return (0);
}
