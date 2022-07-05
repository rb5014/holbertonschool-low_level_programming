#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
/**
 * print_all - print anything
 *
 * printf allowed
 * print \n at the end of the function
 * @format:list of types of arguments passed to the function ( c(char), etc)
 * if one of the string is NULL, print (nil) instead
 *
 * Return: nothing(void)
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i;
	int c;
	int j;
	double f;
	char *x;

	va_start(ap, format);
	while(format[i])
	{
		switch (format[i])
		{
		case 'c':
			c = va_arg(ap, int);
			printf("%c", c);
			break;
		case 'i':
			j = va_arg(ap, int);
			printf("%d", j);
			break;
		case 'f':
			f = va_arg(ap, double);
			printf("%f", f);
			break;
		case 's':
			x = va_arg(ap, char *);
			if (x == NULL)
				x = "(nil)";
			printf("%s", x);
			break;
		default:
			i++;

		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
