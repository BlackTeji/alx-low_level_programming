#include "lists.h"
#include <string.h>

/**
 * *add_node - adds a node to the linked list pointed to by head
 * @head: pointer to linked list
 * @str: string element of the linked list
 * Return: number of elements
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

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

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
