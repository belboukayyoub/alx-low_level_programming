#include "main.h"
#include <stddef.h>
/**
 * print_binary_helper - helper function.
 *
 * @n: unsigned long int
 *
 * Return: VOID.
 */

void print_binary_helper(unsigned long int n)
{
	if (n == 0)
		return;
	print_binary_helper(n >> 1);
	_putchar((n & 1) + '0');
}

/**
 * print_binary - prints the binary representation of a number.
 *
 * @n: unsigned long int
 *
 * Return: VOID.
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		print_binary_helper(n);
}
