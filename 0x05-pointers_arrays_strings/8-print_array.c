#include <stdio.h>
#include "main.h"
/**
 * print_array - prints half of a string, followed by a new line.
 *
 * @a: input int *
 * @n: input int
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
