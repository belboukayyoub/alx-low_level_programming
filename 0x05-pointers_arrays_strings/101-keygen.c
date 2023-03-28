#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random passwords for 101-crackme
 * Return: (0)
 */
int main(void)
{
	int sum;
	char _char;

	srand(time(NULL));
	while (sum <= 2645)
	{
		_char = rand() % 128;
		sum += _char;
		putchar(_char);
	}
	putchar(2772 - sum);
	return (0);
}
