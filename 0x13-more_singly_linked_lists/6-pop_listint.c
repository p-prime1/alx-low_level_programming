#include "lists.h"

/**
 *
 * pop_listint - Deletes the head of a list
 * @head: Pointer to header of the list
 * Return: Returns 0 if head is empty or value of head
 */

int pop_listint(listint_t **head)
{
	if (*head == NULL || (*head)->n == 0)
		return (0);
	return ((*head)->n);
}
