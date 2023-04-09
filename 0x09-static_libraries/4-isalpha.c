#include "main.h"
/**
 * _isalpha - checks for lowercase character,
 *
 * @c: checks input of function
 *
 * Return: if `c` is lowercase otherwise always 0 (Success)
 */
int _isalpha(int c)
{
	int a = 'a';
	int z = 'z';
	int A = 'A';
	int Z = 'Z';

	if ((c >= a && c <= z) || (c >= A && c <= Z))
		return (1);

	return (0);
}
