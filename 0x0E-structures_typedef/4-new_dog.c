#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * new_dog - A struct that copies the old
 * @name: New name
 * @age: New age of the dog
 * @owner: Name of owner
 * Return: Returns pointer on success and null on failure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p = malloc(sizeof(dog_t));

	if (p == NULL)
		return (NULL);
	p->name = strdup(name);
	p->owner = strdup(owner);
	if (p->name == NULL || p->owner == NULL)
	{
		free(owner);
		free(name);
		free(p);
		return (NULL);
	}
	p->age = age;
	return (p);
}
