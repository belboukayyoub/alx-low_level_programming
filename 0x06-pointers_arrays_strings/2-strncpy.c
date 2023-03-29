#include "main.h"
/**
 * _strncpy - copies a string.
 *
 * @dest: input string
 * @src: input string
 * @n: input int
 *
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
		{
			for (; i < n; i++)
				dest[i] = '\0';
		}
	}
	return (dest);
}
