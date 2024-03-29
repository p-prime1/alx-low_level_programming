#include "function_pointers.h"

/**
 * print_name - A function that prints a name
 * @name: Name to be printed
 * @f: Function to be called
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		(f(name));
}
