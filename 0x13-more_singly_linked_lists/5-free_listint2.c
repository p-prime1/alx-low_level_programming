#include "lists.h"

void free_listint2(listint_t **head)
{
	listint_t *temp, *cur;

	if (head != NULL)
	{
		cur = *head;
		while (cur != NULL)
		{
			temp = cur;
			cur = cur->next;
			free(temp);
		}
	}
	*head = NULL;
}

