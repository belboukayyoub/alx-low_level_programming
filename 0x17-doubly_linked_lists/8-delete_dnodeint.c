#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * index of a dlistint_t linked list.
 * @head: head of dlistint_t list
 * @index: int input
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current = *head, *tmp;

	if (current == NULL)
		return (-1);
	if (index == 0)
	{
		tmp = current->next;
		*head = tmp;
		free(current);
		return (1);
	}
	for (i = 0; i < index - 1 && current != NULL; i++)
		current = current->next;
	if (current && i == index)
	{
		tmp = current->next;
		*head = tmp;
		tmp->prev = current->prev;
		tmp->prev->next = tmp;
		free(current);
		return (1);
	}
	return (-1);
}
