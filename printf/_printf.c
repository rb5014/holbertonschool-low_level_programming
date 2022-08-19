#include <stdio.h>

/**
 * _printf - print strings in argument with variables
 *
 * @format: string passed as argument
 *
 *
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list ap;
	int i, j, res = 0, nb_f = 0;
	struct conv k[] ={
		{'c', print_char}
		{'s', print_string}
		{'%', print_percent}
	};

	va_start(ap, format);
	for (i = 0; format[i] != '\0', i++)
	{
		if (format[i] == '%')
		{
			for(j = 0; k[j]; j++)
			{
				if (format[i+1] == k[j].spec)
				{
					res += k[j].f((char) va_arg(ap, int));
					i++;
					nb_f++;
					break;
				}
			}
			_printf("Error: no identifier detected \n");
			return(0);
		}
		else
			_print_char[i];
	}

	va_end(ap);
	res += (i - 1) - nb_f;
	return (res);
}
