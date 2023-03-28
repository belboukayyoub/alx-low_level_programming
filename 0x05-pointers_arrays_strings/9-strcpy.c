#include "main.h"
/**
 * _strcpy - prints half of a string, followed by a new line.
 *
 * @dest: input char *
 * @src: input char *
 *
 * Return: char *
 */
char *_strcpy(char *dest, char *src)
{
	int len;

	for (len = 0; src[len] != '\0'; ++len)
	{
		dest[len] = src[len];
	}
	dest[len] = '\0';
	return (dest);
}
