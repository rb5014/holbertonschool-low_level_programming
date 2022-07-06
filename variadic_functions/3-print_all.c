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
	int i;
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
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				x = va_arg(ap, char *);
				printf("%s", x == NULL ? "(nil)" : x);
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
