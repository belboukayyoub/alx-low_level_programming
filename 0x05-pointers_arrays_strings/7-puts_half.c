#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line.
 *
 * @str: input string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int len;
	int i;

	for (len = 0; str[len] != '\0'; ++len)
		;

	for (i =  (len % 2 == 0) ? len / 2 : (len + 1) / 2 ; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
