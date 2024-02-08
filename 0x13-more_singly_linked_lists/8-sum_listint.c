#include "lists.h"

/**
 * sum_listint - Returns sum of all the values in a list
 * @head: Pointer to the header of the list
 * Return: Returns sum of all values in the list on success or 0 on failure
 */

int sum_listint(listint_t *head)
{
	int i;

	i = 0;
	if (head == NULL)
		return (0);
	while (head->next != NULL)
	{
		i += head->n;
	}
	i += head->n;
	return (n);
}
