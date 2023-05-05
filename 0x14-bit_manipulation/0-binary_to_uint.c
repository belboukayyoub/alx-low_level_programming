#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 *
 * @b: b is pointing to a string of 0 and 1 chars
 *
 * Return: 0 if there is one or more chars in the string b that is not 0 or 1
 * or b is NULL.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int len, i, res = 0;

	if (b == NULL)
		return (0);
	for (len = 0; b[len] != '\0'; len++)
		if (b[len] != '0' && b[len] != '1')
			return (0);
	for (i = 0; i < len; i++)
		res += (b[i] - '0') << (len - 1 - i);
	return (res);
}
