#include "lists.h"

/**
 * listint_len - Returns number of elements in a linked list
 * @h: Pointer to header of the list
 * Return: Returns -1 on failure or number of Nodes on success
 */


size_t listint_len(const listint_t *h)
{
	size_t node;

	node = 0;
	if (h == NULL)
		return (-1);
	while (h->next != NULL)
	{
		h = h->next;
		node++;
	}
	node++;
	return (node);
}
