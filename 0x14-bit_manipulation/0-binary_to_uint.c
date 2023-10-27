#include "main.h"

unsigned int binary_to_uint(const char *b)
{
	unsigned int multiplier;
	unsigned int result;
	int index;

	index = 0;
	multiplier = 0;
	result = 0;

	while (b[multiplier] != '\0')
		multiplier++;
	multiplier -= 1;
	while (b[index] != '\0')
	{
		if ((b[index] != '1') && (b[index] != '0'))
		{
			return (0);
		}
		if ((b[index] == '1'))
		{
			result += (1 * (1 << multiplier));
		}
		index++;
		multiplier--;
	}
	return (result);
}