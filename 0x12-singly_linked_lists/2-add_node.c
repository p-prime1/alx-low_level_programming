#include "lists.h"

/**
 * add_node - adds a new node to the begining of a list
 * @head: Head of the list
 * @str: String to beadded to the string
 * Return: Returns NULL on failure or returns the new node
 */


list_t *add_node(list_t **head, const char *str)
{
	char *string;
	size_t str_len;
	struct list_s *new_nod	new_node = malloc(sizeof(list_t));
	str_len = 0;

	string = strdup(str);
	if (new_node == NULL || head == NULL)
		return (NULL);
	while (string[str_len] != '\0')
	{
		str_len++;
	}
	if (string == NULL)
		str_len = 0;
	new_node->str = string;
	new_node->len = str_len;
	if (*head == NULL)
		new_node->next = NULL;
	else
		new_node->next = *head;
	*head = new_node;
	return (*head);
}
