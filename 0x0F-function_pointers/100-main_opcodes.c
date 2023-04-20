#include <stdio.h>
#include <stdlib.h>

/**
 *  main - prints the opcodes of its own main function.
 *
 * @argc: input size of @argv
 * @argv: input array of command line arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char *opcodes = (char *)main;
	int number_of_bytes, i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	number_of_bytes = atoi(argv[1]);
	if (number_of_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < number_of_bytes; i++)
	{
		printf("%02x", (unsigned char)opcodes[i]);
		if (i < number_of_bytes - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
