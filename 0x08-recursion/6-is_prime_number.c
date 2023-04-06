#include "main.h"

/**
 *  is_divisible - a helper function that check if @n is
 *  divisible by @b.
 *
 * @n: int input
 * @b: int input
 *
 * Return: 0 if @b = 1 and 1 if @n % @b = 0
 */
int is_divisible(int n, int b)
{
	if (b == 1)
		return (0);

	if (n % b == 0)
		return (1);

	return (is_divisible(n, b - 1));
}

/**
 * is_prime_number - 1 if the input integer is a prime number,
 * otherwise return 0
 *
 * @n: int input
 *
 * Return: is @n a prime number or not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (!is_divisible(n, n - 1));
}
