#include "lists.h"
#include <string.h>

/**
 * add_node_end - add a node at the end of a linked list pointed to by head.
 * @head: pointer to the node
 * @str: string for the new node
 * Return:address of new element or NULL if it fails.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current;
	list_t *new_node;
	int c;

	current = *head;
	while (current && current->next != NULL)
		current = current->next;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (new_node->len = 0; str[new_node->len] != '\0'; ++new_node->len)
		;

	new_node->next = NULL;

	if (current)
		current->next = new_node;
	else
		*head = new_node;

	return (new_node);
}
