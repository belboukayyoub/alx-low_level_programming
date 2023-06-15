#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: head of dlistint_t list
 * @idx: int input
 * @n: int input
 *
 * Return:  the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h, *tmp;
	unsigned int i = 0;

	if (current == NULL || idx == 0)
		return (add_dnodeint(h, n));
	while (current->next && ++i <= idx)
		current = current->next;
	if (i == idx)
	{
		tmp = current->prev;
		add_dnodeint(&(current->prev), n);
		current->prev->prev = tmp;
		return (current);
	}
	return (NULL);

}
