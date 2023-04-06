#include "main.h"

/**
 * calcul_sqr - a helper function that does the recursion work.
 *
 * @n: int input
 * @b: int input
 *
 * Return: the natural square root of @n
 */
int calcul_sqr(int n,int b)
{
	if (b * b == n)
		return(b);
	
	if(b * b > n)
		return (-1);

	return (calcul_sqr(n, b + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: int input
 *
 * Return: he natural square root of @n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (calcul_sqr(n, 0));
}
