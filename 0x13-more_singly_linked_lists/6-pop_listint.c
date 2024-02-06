#include "lists.h"

int pop_listint(listint_t **head)
{
	if (*head == NULL || (*head)->n == 0;)
		return (0);
	(*head)->n = 0;
	free(head);
	return ((*head)->n);
}
