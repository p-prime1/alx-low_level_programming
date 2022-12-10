#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - Checks if n is less than 5 or 6 or equal to zero
 * Return: Always 0
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int d;

	d = n % 10;
	if (d > 5)
	{
		printf("Last digit of %d is %i and is greater than 5\n", n, d);
	}
	else if (d < 6 && d != 0)
	{
		printf("Last digit of %d is %i and is less than 6 and not 0\n", n, d);
	}
	else
	{
		printf("Last digit of %d is %i and is 0\n", n, d);
	}
	/* your code goes there */
	return (0);
}
