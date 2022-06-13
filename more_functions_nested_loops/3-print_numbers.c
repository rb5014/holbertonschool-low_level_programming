#include "main.h"

/**
 * print_numbers - printf numbers from 0 to 9, followed by a newline
 *
 *
 * Return: nothing(void)
 */

void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
