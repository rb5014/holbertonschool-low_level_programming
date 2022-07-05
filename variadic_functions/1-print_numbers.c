#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - print numbers + \n
 *
 * printf allowed
 * print \n at the end of the function
 * if separator is NULL, don't print it
 * @separator: string to be printed between numbers
 * @n: number of integers passed to function
 * Return: nothing(void)
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

 	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(ap, int));
			if (i < n - 1 && separator)
				printf("%s", separator);
		}
	}
	va_end(ap);
	printf("\n");
}
