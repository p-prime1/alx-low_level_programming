#include <stdio.h>

void times_table(void)
{
	int i, j;

	i = 0;
	j = 0;
	while (j <= 9)
	{
		while (i <= 9)
		{	
			printf("%4d,",(i * j));
			i++;
		}
		i = 0;
		putchar('\n');
		j++;
	}
}
