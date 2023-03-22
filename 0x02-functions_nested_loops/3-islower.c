#include "main.h"
/**
 * _islower - checks for lowercase character,
 *
 * @c: checks input of function
 *
 * Return: if `c` is lowercase otherwise always 0 (Success)
 */
int _islower(int c)
{
	int a = 'a';
	int z = 'z';

	if (c >= a && c <= z)
		return (1);

	return (0);
}
