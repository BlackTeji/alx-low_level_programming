#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints the elements of a linked list.
 * @h: the linked list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nbr_nodes = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		printf("[%d] ", current->len);
		if (current->str != NULL)
			printf("%s\n", current->str);
		else
			printf("(nil)\n");

		current = current->next;
		nbr_nodes++;
	}

	return (nbr_nodes);
}
