#include "lists.h"

/**
 *
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int idx)
{
	unsigned int i;
	dlistint_t *ptr;

	if (*head == NULL)
		return (-1);
	ptr = *head;
	i = 0;
	while (ptr->next != NULL)
	{
		if (i == idx - 1)
			{
				ptr->next->next->prev = ptr;
				ptr->next = ptr->next->next;
				return (1);
			}
		ptr = ptr->next;
	}
	return (-1);

}
