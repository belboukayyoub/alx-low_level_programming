#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_char - print a char
 *
 * @args: va_list input
 *
 * Return: VOID
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
 * print_integer - print an integer
 *
 * @args: va_list input
 *
 * Return: VOID
 */
void print_integer(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - print a float
 *
 * @args: va_list input
 *
 * Return: VOID
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - print a string
 *
 * @args: va_list input
 *
 * Return: VOID
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);
}



/**
 * print_all - prints anything.
 *
 * @format: char *
 *
 * Return: VOID
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	print_function functions[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string}
	};
	char *s = "";

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (j < 4 && format[i] != functions[j].format[0])
			j++;
		if (j < 4)
		{
			printf("%s",s);
			functions[j].function(args);
			s = ", ";
		}
		i++;
	}
	printf("\n");
}
