#include "main.h"
/**
 * rev_string - prints a string in reverse
 * followed by a newline to standard output.
 *
 * @s: input string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int len;
	int i;
	char c;

	for (len = 0; s[len] != '\0'; ++len)
		;
	len--;
	for (i = 0; i <= len / 2 ; i++)
	{
		c = s[i];
		s[i] = s[len - i];
		s[len - i] = c;
	}
}
