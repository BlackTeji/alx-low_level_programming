#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a linked list.
 * @head: points to pointer of first element.
 * @n: number of elements to be added
 * Return: addres of new element or NULL.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->next = *head;
	temp->n = n;

	*head = temp;

	return (*head);
}
