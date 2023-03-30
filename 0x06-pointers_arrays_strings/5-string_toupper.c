#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 *
 * @str: input string
 *
 * Return: uppercase of @str
 */

char *string_toupper(char *str)
{
	int i;
	int diff = 'A' - 'a';

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] += diff;
	}
	return (str);
}
