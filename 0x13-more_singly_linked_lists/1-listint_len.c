#include "lists.h"

/**
 * listint_len - Counts the number of nodes
 * @h: Pointer to node
 * Return: Returns number of nodes
 */


size_t listint_len(const listint_t *h)
{
	size_t counter;

	counter = 1;

	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}

