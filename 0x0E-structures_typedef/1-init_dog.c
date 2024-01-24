#include "dog.h"

/**
 * init_dog - Initializes a struct
 * @d: Pointer to struct
 * @name: Name of element in struct
 * @age: Element of the struct
 * @owner: An element of the struct naming an owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
