#include <stdio.h>

/**
 * main - prints its name, followed by a new line.
 * @argc: input size of @argv
 * @argv: input array of command line arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	(void) argc; /* indicate that it is unused */
	printf("%s\n", argv[0]);
	return (0);
}
