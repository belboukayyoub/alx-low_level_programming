#include "main.h"
/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase,
 * followed by a new line.
 *
 * Return: VOID.
 */
void print_alphabet_x10(void)
{
	int i;
	int j;
	int a = 'a';
	int z = 'z';

	for (j = 0; j < 10; j++)
	{
		for (i = a; i <= z; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
