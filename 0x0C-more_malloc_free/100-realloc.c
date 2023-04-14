#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @ptr: pointer void
 * @old_size: unsigned int
 * @new_size: unsigned int
 *
 * Return: the newly allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i, tp = old_size;

	if (old_size == new_size)
		return (ptr);
	if (new_size > old_size)
		tp = old_size;

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}

	p = malloc(tp);

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	p = ptr;

	free(ptr);

	ptr = malloc(new_size);

	for (i = 0; i < tp; i++)
	{
		((char *)ptr)[i] = p[i];
	}

	return (ptr);
}
