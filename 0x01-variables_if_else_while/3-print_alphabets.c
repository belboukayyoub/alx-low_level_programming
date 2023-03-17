#include <stdio.h>
/**
 * main - Entry point
 * Description: This program prints the alphabet in lowercase.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 'a'; /* 97 in ASCII */
	int z = 'z'; /* 122 in ASCII */
	int _char;

	for (_char = a ; _char <= z ; _char++)
		putchar(_char);

	a = 'A'; /* 65 in ASCII */
	z = 'Z'; /* 90 in ASCII */

	for (_char = a ; _char <= z ; _char++)
		putchar(_char);
	putchar('\n');
	return (0);
}
