#include "main.h"
/**
 * _strncat - appends the src string to the dest string,
 *
 * @dest: input string
 * @src: input string
 * @n: input int
 *
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	int l;
	int i;

	for (l = 0; dest[l] != '\0'; ++l)
		;

	for (i = 0; src[i] != '\0'; i++)
	{
		if (i >= n)
			break;
		dest[i + l] = src[i];
	}

	return (dest);
}
