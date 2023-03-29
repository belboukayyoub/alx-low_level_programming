#include "main.h"
/**
 * _strcat - appends the src string to the dest string,
 *
 * @dest: input string
 * @src: input string
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int l;
	int i;

	for (l = 0; dest[l] != '\0'; ++l)
		;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i + l] = src[i];
	}

	return (dest);
}
