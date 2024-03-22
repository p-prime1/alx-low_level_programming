#include "lists.h"

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
