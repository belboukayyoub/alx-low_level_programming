#include "main.h"
/**
 * leet -  encodes a string into 1337.
 * @str: input string`
 *
 * Return: Always 0.
 */
char *leet(char *str)
{
	int i, j;
	int low[] = {'a', 'e', 'o', 't', 'l'};
	int uper[] = {'A', 'E', 'O', 'T', 'L'};
	int num[] = {'4', '3', '0', '7', '1'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < (int)sizeof(low); j++)
		{
			if (str[i] == low[j] || str[i] == uper[j])
			{
				str[i] = num[j];
				break;
			}
		}
	}
	return (str);
}
