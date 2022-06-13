#include "main.h"
/**
 * print_most_numbers - printf 0 to 9 (except 2 and 4), followed by a newline
 *
 *
 * Return: nothing(void)
 */

void print_most_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
			_putchar(i);
	}
	_putchar('\n');
}
