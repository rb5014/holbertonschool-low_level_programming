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
	int len = 0, half, nbchar;

	while (str[len])
	{
		len++;
	}
	nbchar = len - 1;
	if (nbchar % 2 == 0)
		half = nbchar / 2;
	else
		half = (nbchar - 1) / 2;

	while (half <= nbchar)
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
