#include "lists.h"

/**
 * print_listint - Prints elements in a list
 * @h: Pointer to header of the list
 * Return: Returns -1 on failure or number of Nodes on success
 */


size_t print_listint(const listint_t *h)
{
	size_t node;

	node = 0;
	if (h == NULL)
		return (-1);
	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node++;
	}
	node++;
	printf("%d\n", h->n);
	return (node);
}
