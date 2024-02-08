#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node in a list
 * @head: Pointer to head nof node
 * @index: The nth node
 * Return: Returns the nth node on succdss or NULL on failure
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;
	if (head == NULL)
		return (NULL);
	while (i < index)
	{
		if (head->next != NULL)
		{
			head = head->next;
		}
		else
			return (NULL);
		i++;
	}
	return (head);
}
