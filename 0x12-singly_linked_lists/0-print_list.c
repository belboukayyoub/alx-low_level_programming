#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list.
 *
 * @h: const list_t input
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	if (h == NULL)
		return (0);
	if (h->str == NULL || h->len == 0)
		printf("[0] (nill)\n");
	else
		printf("[%u] %s\n", h->len, h->str);
	return (1 + print_list(h->next));
}
