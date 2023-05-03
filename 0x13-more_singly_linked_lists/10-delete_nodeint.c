#include "lists.h"

/**
 *  delete_nodeint_at_index -  deletes the node at index
 *  index of a listint_t linked list.
 *
 * @head: the head of linked list
 * @index: unsigned int input
 *
 * Return: Always 0.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *last, *next;

	if (!*head)
		return (-1);
	last = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(last);
		return (1);
	}

	for (i = 0; i < index - 1 && last->next; i++)
		last = last->next;
	if (!last->next)
		return (-1);
	next = last->next->next;
	free(last->next);
	last->next = next;
	return (1);

}
