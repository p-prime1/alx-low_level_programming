#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>

int _putchar(char c)
{
	return (write(1, &c, 1));
}
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recrsion(int x, int y);
int _sqrt_recursion(int n);
int is_prime_number(int n);

#endif
