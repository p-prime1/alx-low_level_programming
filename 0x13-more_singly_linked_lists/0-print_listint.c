#include "lists.h"

/**
 * print_listint - Function to print elements in a node
 * @h: Pointer to Node
 * Return: Number of nodes
 */


size_t print_listint(const listint_t *h)
{
	size_t nodeCount;

	nodeCount = 1;
	if (h == NULL)
	{
		return (0);
	}
	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodeCount++;
	}
	printf("%d\n", h->n);
	return (nodeCount);
}
