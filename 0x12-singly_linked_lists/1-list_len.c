#include "lists.h"

/**
 * list_len - Prints num of strings
 * @h: Pointer to first node
 * Return: Returns 0 if h is null or Number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;
	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
