#include "main.h"

/**
 * _strchr - Searches for the first occurence of a character
 *  @s: String we are searching through
 *  @c: character been searched for
 *  Return: Pointer to the char if found or Null if not found
 */

char *_strchr(char *s, char c)
{
	while (*s != EOF)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}

