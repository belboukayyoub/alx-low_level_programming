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
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}
	return (count);
}
