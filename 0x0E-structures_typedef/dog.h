#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Dog information
 * @name: Name of dog
 * @age: DOg age
 * @owner: Owner of dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
