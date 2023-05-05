#include "main.h"
#include <stddef.h>

/**
 * print_binary - prints the binary representation of a number.
 *
 * @n: unsigned long int
 *
 * Return: VOID.
 */

void print_binary(unsigned long int n)
{
	if(n == 0)
		return;
	print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
