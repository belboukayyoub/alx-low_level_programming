#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest.
 * The memory areas must not overlap.
 *
 * @dest: string input
 * @src: string input
 * @n: unsigned int input
 *
 * Return: a pointer to the memory area dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
