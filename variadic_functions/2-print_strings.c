#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - print strings + \n
 *
 * printf allowed
 * print \n at the end of the function
 * if separator is NULL, don't print it
 * if one of the string is NULL, print (nil) instead
 * @separator: string to be printed between numbers
 * @n: number of integers passed to function
 * Return: nothing(void)
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *x;

	va_start(ap, n);
	{
		for (i = 0; i < n; i++)
		{
			x = va_arg(ap, char *);
			if (x == NULL)
				x = "(nil)";
			printf("%s", x);
			if (i < n - 1 && separator)
				printf("%s", separator);
		}
	}
	va_end(ap);
	printf("\n");
}
