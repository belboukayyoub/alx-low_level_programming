#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t
 * linked list.
 *
 * @head: thead of linked list
 *
 * Return: sum of all the data (n).
 */
int sum_listint(listint_t *head)
{
	unsigned int i;
	int sum = 0;

	for (i = 0; head; i++)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
