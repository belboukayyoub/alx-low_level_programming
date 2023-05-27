#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another.
 * @n: input unsigned long int
 * @m: input unsigned long int
 * Return: the number of bits you would need to flip
 * to get from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m, res = 1;
	unsigned int j = 0, i;

	for (i = 0; i < 64; i++)
	{
		if (res == (diff & res))
			j++;
		res <<= 1;
	}

	return (j);
}
