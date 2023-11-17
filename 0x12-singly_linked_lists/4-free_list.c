#include "lists.h"

/**
 * free_list - frees a linked list.
 * @head: pointer to the linked list.
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *current;
	list_t *next_element;

	if (head == NULL)
		return;

	current = head;

	while (current != NULL)
	{
		next_element = current->next;
		free(current->str);
		free(current);
		current = next_element;
	}
}
