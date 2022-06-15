#include "main.h"

/**
 * print_rev - prints a string, in reverse, +\n
 *
 * @s: pointer to adress of the string passed
 *
 * Return: nothing(void)
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
