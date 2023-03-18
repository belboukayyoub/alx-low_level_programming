#include <stdio.h>
/**
 * main - Entry point
 * Description: This program prints the alphabet in lowercase in reverse.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 'a'; /* 97 in ASCII */
	int z = 'z'; /* 122 in ASCII */
	int _char;

	for (_char = z ; _char >= a ; _char--)
		putchar(_char);
	putchar('\n');
	return (0);
}
