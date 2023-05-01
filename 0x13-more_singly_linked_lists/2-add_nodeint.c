#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 *
 * @head: the head of list
 * @n: int input
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *lk = malloc(sizeof(listint_t));
	lk->n = n;
	lk->next = *head;
	*head = lk;
	return (*head);
}
