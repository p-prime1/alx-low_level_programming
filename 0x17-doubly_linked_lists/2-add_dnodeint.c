#include "lists.h"

/**
 * add_dnodeint - Add a new node to list
 * @head: Pointer to head of node
 * @n: Integer to of node
 * Return: Returns pointer to new node on success or NULL on failure
 */


dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->prev = *head;
	if (*head == NULL)
		*head = new_node;
	else
	{
		new_node->next = *head;
		(*head)->prev = new_node;
		new_node->prev = NULL;
	}
	*head = new_node;
	new_node->n = n;
	return (new_node);
}
