#include "3-calc.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * main - Entry
 *
 * @argc: input size of @argv
 * @argv: input array of command line arguments
 *
 *Return: Always 0.
 */

int main(int argc, char *argv[])
{
	if (argc < 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
