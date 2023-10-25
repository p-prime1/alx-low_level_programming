#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Adds A new node to the end of a list
 * @head: Pointer to thr first node
 * @n: Variable to be assigned to the node
 * Return: Address of the new node
 */


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *temp;

	temp = *head;
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	if (head == NULL)
	{
		*head = newNode;
		newNode->n  = n;
		return (newNode);
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
	}
	temp->next = newNode;
	newNode->n = n;
	free(temp);
	newNode->next = NULL;
	return (newNode);
}

