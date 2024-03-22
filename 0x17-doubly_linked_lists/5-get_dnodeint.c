#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the node at the nth index
 * @head: Pointer to head of a node
 * @index: The nth index
 * Return: Returns NULL on failure or the nth Node on success
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *temp_ptr;

	if (head == NULL)
		return (NULL);
	temp_ptr = head;
	i = 0;
	while (temp_ptr != NULL)
	{
		if (i == index)
			return (temp_ptr);
		temp_ptr = temp_ptr->next;
		i++;
	}
	return (NULL);
}
