#include "dog.h"
#include <stdio.h>

/**
 * init_dog - Funtion to initialize a struct
 * stuct dog *d - Struct reef
 * @d: ALias
 * @name: name of dog
 * @age: age of dog
 * @owner: Owner of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL && name != NULL && owner != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

}

