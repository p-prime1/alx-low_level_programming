#include "lists.h"

/**
 * add_dnodeint_end - Adds a node to the end of a list
 * @head: Pointer to head of a list
 * @n: Element to be added to list
 */


dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *ptr;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);	
	}
	ptr = *head;
	while (ptr->next != NULL)
		ptr = ptr->next;
	new_node->prev = ptr;
	new_node->next = NULL;
	ptr->next = new_node;
	return (new_node);
}
