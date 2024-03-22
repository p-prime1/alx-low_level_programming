#include "lists.h"

int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *temp_ptr;

	sum = 0;
	if (head == NULL)
		return (0);
	temp_ptr = head;
	while (temp_ptr->next != NULL)
	{
		sum += temp_ptr->n;
		temp_ptr = temp_ptr->next;
	}
	sum += temp_ptr->n;
	return (sum);
}
