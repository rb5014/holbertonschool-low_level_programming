#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: pointer containing string adress
 *
 * Return: nothing(void)
 */

void puts_half(char *str)
{
	int len = 0, half;

	while (str[len])
	{
		len++;
	}

	if (len % 2 == 0)
		half = len / 2;
	else
		half = (len - 1) / 2;

	while (half < len)
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
