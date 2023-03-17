#include <stdio.h>
/**
 * main - Entry point
 * Description: This program prints all single digit
 * numbers of base 10
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0 ; num <= 9 ; num++)
		printf("%d", num);
	printf("\n");
	return (0);
}
