#include "main.h"
/**
 * _atoi - convert string to integer
 *
 * @s: Input
 *
 * Return: Integer Converted
 */

int _atoi(char *s)
{
	int len;
	int sin;
	unsigned int digit;

	sin = 1;
	digit = 0;

	for (len = 0; s[len] != '\0'; ++len)
	{
		if (s[len] == '-')
			sin *= -1;
		else if (s[len] >= '0' && s[len] <= '9')
		{
			digit = (digit * 10) + (s[len] - '0');
		}
		else if (digit > 0)
			break;
	}

	return (digit * sin);
}
