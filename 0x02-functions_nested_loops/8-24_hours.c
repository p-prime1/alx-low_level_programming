H#include "main.h"

int main(void)
{

}
void jack_bauer(void)
{
	int hour;
	int minute;

	for (hour = 0; hour <= 24; hour++)
	{
		for(minute = 0; minute <= 60; minute++)
		{
			putchar((hour / 10) + '0');
			putchar((hour % 10) + '0');
			putchar(;);
			putchar((minute % 10) + '0');
			putchar((minute / 10) + '0');
		}
	}
