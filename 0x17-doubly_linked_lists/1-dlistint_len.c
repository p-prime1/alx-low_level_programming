#include "lists.h"

/**
 * dlistint_len - returns no of elements of a list
 * @h: Pointer to header of the list
 * Return: Returns number of elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t no_nodes;

	no_nodes = 0;
	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		h = h->next;
		no_nodes++;
	}
	no_nodes += 1;
	return (no_nodes);

}
