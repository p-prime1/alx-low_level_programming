#include "lists.h"

/**
 * add_node_end - Adds a node to the end of a list
 * @head: Pointer to the start of the list
 * @str: String to be added to the node
 * Return: Returns 0 or NULL on failure and Pointer to node on success
 */


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	size_t str_len;
	char *string;

	str_len = 0;
	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	string = strdup(str);
	while (string[str_len] != '\0')
		str_len++;
	if (string == NULL)
		str_len = 0;
	while ((*head)->next != NULL && *head != NULL)
		*head = (*head)->next;
	node->str = string;
	node->len = str_len;
	if (*head == NULL)
		*head = node;
	else
		(*head)->next = node;
	node->next = NULL;
	return (node);
}
