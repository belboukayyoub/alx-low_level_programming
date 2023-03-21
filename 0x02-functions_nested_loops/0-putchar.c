#include "main.h"
/**
 * main - Print `_putchar`
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	char out[] = "_putchar";

	for (i = 0; i < (int)sizeof(out) - 1; i++)
	{
		_putchar(out[i]);
	}
	_putchar('\n');
	return (0);
}
