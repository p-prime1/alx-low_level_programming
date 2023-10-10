#include <stdio.h>
#include "dog.h"
/**
 * print_dog - Print a struct
 * struct dog - Sturct dor dog
 * @d: Pointer
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("nil");
	}
	else
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)\n");
		}
		else
		{
			printf("Name: %s\n", d->name);
			printf("Age: %2f\n", d->age);
			printf("Owner: %s\n", d->owner);
		}
	}
}
