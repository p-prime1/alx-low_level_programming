#include "lists.h"

/**
 * print_dlistint - Prints elements of a list
 * @h: Pointer to header of the list
 * Return: Returns number of elements in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t no_nodes;

	no_nodes = 0;
	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		no_nodes++;
	}
	printf("%d\n", h->n);
	no_nodes += 1;
	return (no_nodes);

}
