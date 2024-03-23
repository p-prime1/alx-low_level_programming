#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a node at the index
 * @h: Pointer to head
 * @idx: Index to be added
 * @n: Element to be added to the new_node
 * Return: Returns the node added on success of NULL on failure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new_node;
	dlistint_t *temp;

	i = 0;
	if (h == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	temp = *h;
	while (temp->next != NULL)
	{
		if (i == idx - 1)
		{
			new_node->next = temp->next;
			temp->next = new_node;
			new_node->prev = temp;
			return (new_node);
		}
		i++;
		temp = temp->next;
	}
	return (NULL);

}
