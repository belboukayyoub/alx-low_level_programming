#include "main.h"
/**
 * infinite_add - adds two numbers
 * @n1: first number to add
 * @n2: second number to add
 * @r: buffer to store result
 * @size_r: size of buffer
 *
 * Return: pointer to result buffer, or 0 if result can't be stored
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int ln1 = 0, ln2 = 0, max_ln = 0;
	int sum, carry = 0, i, j;

	while (n1[ln1] != '\0')
		ln1++;
	while (n2[ln2] != '\0')
		ln2++;

	max_ln = ln1 > ln2 ? ln1 : ln2;

	if (max_ln >= size_r)
		return (0);

	r[max_ln] = '\0';
	ln1--;
	ln2--;
	for (i = 0; i < max_ln; i++)
	{
		sum = carry;
		if (ln1 >= 0)
			sum += n1[ln1] - '0';
		if (ln2 >= 0)
			sum += n2[ln2] - '0';
		r[max_ln - i - 1] = sum % 10 + '0';
		carry = sum / 10;
		ln1--;
		ln2--;
	}

	if (carry != 0)
	{
		if (max_ln + 1 >= size_r)
			return (0);
		for (j = max_ln; j >= 0; j--)
			r[j + 1] = r[j];
		r[0] = carry + '0';
	}
	return (r);
}
