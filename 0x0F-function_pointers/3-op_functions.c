#include "3-calc.h"
#include <stdio.h>
/**
 * op_add - Calculate the sum of a and b.
 *
 * @a: int input
 * @b: int input
 * Return: @a + @b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Calculate the difference of a and b.
 *
 * @a: int input
 * @b: int input
 * Return: @a - @b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Calculate the product of a and b.
 *
 * @a: int input
 * @b: int input
 * Return: @a * @b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Calculate the result of the division of a by b
 *
 * @a: int input
 * @b: int input
 * Return: @a / @b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Calculate the remainder of the division of a by b.
 *
 * @a: int input
 * @b: int input
 * Return: @a % @b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
