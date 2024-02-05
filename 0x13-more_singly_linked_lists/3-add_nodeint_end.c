#include "lists.h"

/**
 * add_nodeint_end - Adds node to the end of a list
 * @head: Pointer to head of the list
 * @n: Integer to be added ot list
 * Return: Returns NULL of Pointer to the newly created list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (*head == NULL || node == NULL)
		return (NULL);
	while ((*head)->next != NULL)
		*head = (*head)->next;
	(*head)->next = node;
	node->n = n;
	node->next = NULL;
	return (node);
}
