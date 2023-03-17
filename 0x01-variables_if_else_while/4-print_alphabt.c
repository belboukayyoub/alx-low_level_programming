#include <stdio.h>
/**
 * main - Entry point
 * Description: This program prints the alphabet in lowercase.
 * except `q` and `e`
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 'a'; /* 97 in ASCII */
	int z = 'z'; /* 122 in ASCII */
	int e = 'e'; /* 101 in ASCII */
	int q = 'q'; /* 113 in ASCII */
	int _char;

	for (_char = a ; _char <= z ; _char++)
	{
		if (_char != e && _char != q)
			putchar(_char);
	}
	putchar('\n');
	return (0);
}
