#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array -  creates an array of chars, and initializes it
 * with a specific char.
 * @size: unsigned int input
 * @c: char input
 *
 * Return: NULL if size = 0 else a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *ptr = malloc(sizeof(char) * size);

	if (ptr == NULL || size == 0)
		return ('\0');

	while (size > 0)
		ptr[--size] = c;

	return (ptr);
}
