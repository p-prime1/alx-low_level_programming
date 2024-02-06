#include "lists.h"

void free_listint(listint_t *head)
{
	int *temp;

	while (head->next != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
