#include "main.h"
/**
 * _isdigit - checks for digit.
 *
 * @c: input of function
 *
 * Return: 1 if c is a digit and 0 otherwise.
 */
int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}
