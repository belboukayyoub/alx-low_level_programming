#include <stdio.h>
/**
 * main - Entry point
 * Description: This program prints all single digit
 * numbers of base 10 starting from 0 using putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int _0 = '0'; /* 48 in ASCII */
	int _9 = '9'; /* 57 in ASCII */
	int num;

	for (num = _0 ; num <= _9 ; num++)
		putchar(num);
	putchar('\n');
	return (0);
}
