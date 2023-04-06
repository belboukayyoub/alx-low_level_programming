#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 *
 * @s: input string
 *
 * Return: length of @s
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}

/**
 *  is_palindrome_recur - a helper function that check if @s is
 *  a palindrome or not
 *
 * @s: string input
 * @start: int input
 * @end: int input
 *
 * Return: is @s a palindrome or not
 */
int is_palindrome_recur(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (is_palindrome_recur(s, start + 1, end - 1));
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 *
 * @s: string input
 *
 * Return: is @s a palindrome or not
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (is_palindrome_recur(s, 0, len - 1));
}
