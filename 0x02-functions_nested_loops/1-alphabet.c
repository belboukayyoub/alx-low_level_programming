#include "main.h"
/**
 * print_alphabet - Prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: VOID.
 */
void print_alphabet(void)
{
	int i;
	int a = 'a';
	int z = 'z';

	for (i = a; i <= z; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
