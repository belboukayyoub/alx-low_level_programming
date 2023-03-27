#include "main.h"
/**
 * print_rev - prints a string in reverse
 * followed by a newline to standard output.
 *
 * @s: input string
 *
 * Return: void
 */

void print_rev(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; ++len)
		;

	for (--len; len >= 0 ; --len)
		_putchar(s[len]);
	_putchar('\n');
}
