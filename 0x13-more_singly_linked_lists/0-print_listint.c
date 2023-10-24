#include "lists.h"

/**
 * print_listint - Function to print elements in a node
 * @h: Pointer to Node
 * Return: Number of nodes
 */


size_t print_listint(const listint_t *h)
{
	size_t nodeCount;

	nodeCount = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodeCount++;
	}
	return (nodeCount);
}

