#include "main.h"
#include <stdio.h>

/**
 * get_bit - returns the value of a bit at a given index
 * @n: input unsigned long int
 * @index: unsigned int
 * Return: Always 0.
 */


int get_bit(unsigned long int n, unsigned int index)
{
	return ((index > INT_BITS) ? (-1) : (n >> index) & 1);
}
