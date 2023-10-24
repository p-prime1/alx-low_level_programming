#include "lists.h"

/**
 * add_nodeint - Adds A new node to hte begiinging of a list
 * @head: Pointer to thr first node
 * @n: Variable to be assigned to the node
 * Returns: Address of the new node
 */


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	if (*head == NULL)
		newNode->next = NULL;
	newNode->next = *head;
	*head = newNode;
	newNode->n = n;
	return (*head);
}

