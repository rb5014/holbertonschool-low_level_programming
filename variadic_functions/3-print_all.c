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
	char c;
	int i, j;
	double f;
	char *x, *sep;

	va_start(ap, format);
	if (format)
	{
		while (format[i])
		{
			sep = "' ";
			switch (format[i])
			{
			case 'c':
				printf("%c", c = va_arg(ap, int));
				break;
			case 'i':
				printf("%d", j = va_arg(ap, int));
				break;
			case 'f':
				printf("%f", f = va_arg(ap, double));
				break;
			case 's':
				x = va_arg(ap, char *);
				if (x == NULL)
					x = "(nil)";
				printf("%s", x);
				break;
			default:
				sep = NULL;
			}
			if (!(format[i + 1] == '\0') && sep)
				printf(", ");

			i++;
		}
	}
	va_end(ap);
	printf("\n");
}
