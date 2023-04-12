#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 *
 * @s1: string input
 * @s2: string input
 *
 * Return: a pointer to the array, or NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i = 0, len_s1 = 0;

	if (s1 != NULL)
		for (i = 0; s1[i] != '\0'; ++i)
			;
	len_s1 = i;
	if (s2 != NULL)
		for (; s2[i] != '\0'; ++i)
			;
	ptr = malloc(len_s1 + i + 1);
	if (ptr == NULL)
		return ('\0');

	if (s1 != NULL)
		for (i = 0; s1[i] != '\0'; ++i)
			ptr[i] = s1[i];
	if (s2 != NULL)
		for (i = 0; s2[i] != '\0'; ++i)
			ptr[i + len_s1] = s2[i];
	ptr[i + len_s1] = '\0';
	return (ptr);
}
