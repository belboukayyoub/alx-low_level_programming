#include "main.h"

/**
 * clear_bit -  sets the value of a bit to 0 at a given index.
 * @n: input unsigned long int
 * @index: input unsigned int
 * Return: 1 id success or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n = *n & (~(1 << index));
	return (1);
}