#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 *
 * @head: the head of linked list
 * @idx: unsigned int input
 * @n: int input
 * Return: Always 0.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned	int i;
	listint_t *new, *tmp;

	if (!head)
		return ('\0');

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return ('\0');
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		new->n = n;
		*head = new;
		return (new);
	}
	tmp = *head;
	for (i = 0; i < idx - 1 && tmp; i++)
		tmp = tmp->next;
	if (!tmp)
	{
		free(new);
		return (NULL);
	}
	new->next = tmp->next;
	tmp->next = new;
	return (new);
}
