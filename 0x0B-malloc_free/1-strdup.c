#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: string input
 *
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *ptr;
	int i;

	if (str == NULL)
		return ('\0');

	for (i = 0; str[i] != '\0'; ++i)
		;

	ptr = malloc(i + 1);

	if (ptr == NULL)
		return ('\0');

	for (i = 0; str[i] != '\0'; ++i)
		ptr[i] = str[i];

	return (ptr);
}
