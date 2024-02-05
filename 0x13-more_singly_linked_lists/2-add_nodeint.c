#include "lists.h"

/**
 * add_nodeint - Adds a node to the begining of a list
 * @head: Pointer to head of the list
 * @n: Integer to be assigned to the beginin of the node
 * Return: Returns Null on failure or pointer to new node
 */


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL || *head == NULL)
		return (NULL);
	node = (*head)->next;
	(*head)->next = node;
	node->n = n;
	return (node);
}
