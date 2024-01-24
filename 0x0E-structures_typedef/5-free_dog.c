#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - A function that frees elements in a struct
 * @d: Pointer to the struct to be freed
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
