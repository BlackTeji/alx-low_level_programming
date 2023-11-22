#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of the linked list.
 * @head: points to first element of list.
 * Return: sum of (n), if list is empty.
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
