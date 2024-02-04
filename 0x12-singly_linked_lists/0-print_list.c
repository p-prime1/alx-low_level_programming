#include "lists.h"
/**
 * print_list - Prints str in nodes
 * @h: Pointer to header
 * Return: Returns no of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i;

	i = 1;
	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	printf("[%u] %s\n", h->len, h->str);
	return (i);
}
