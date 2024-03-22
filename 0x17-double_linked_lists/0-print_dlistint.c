#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
	size_t no_nodes;

	no_nodes = 0;

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
