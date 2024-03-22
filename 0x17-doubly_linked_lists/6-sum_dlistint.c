#include "lists.h"

/**
 * sum_dlistint - Sums elements in a list
 * @head: Pointer to header of list
 * Return: Returns 0 on failure and sum of all elements on success
 */

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
