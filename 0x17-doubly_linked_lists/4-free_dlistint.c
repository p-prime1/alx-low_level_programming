#include "lists.h"

/**
 * free_dlistint - Free a list
 * @head: Pointer to head of list;
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	
	while (head->next != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
