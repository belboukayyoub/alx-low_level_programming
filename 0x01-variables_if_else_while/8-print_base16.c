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
	int a = 'a'; /* 97 in ASCII */
	int f = 'f'; /* 102 in ASCII */
	int _char;

	for (num = 0 ; num <= 9 ; num++)
		printf("%d", num);
	for (_char = a ; _char <= f ; _char++)
		putchar(_char);
	putchar('\n');
	return (0);
}
