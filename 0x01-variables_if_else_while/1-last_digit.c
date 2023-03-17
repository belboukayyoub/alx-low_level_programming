#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: this program will assign a random number to the variable `n`
 * each time it is executed and prints whether the last digit is > 5 or is 0
 * or is < 6 and not 0
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastDigit = n % 10;
	printf("Last digit of %d is %d ", n, lastDigit);
	if (lastDigit > 5)
	{
		printf("and is greater than 5\n");
	}

	if (lastDigit == 0)
	{
		printf("and is 0\n");
	}
	else if (lastDigit < 6)
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
