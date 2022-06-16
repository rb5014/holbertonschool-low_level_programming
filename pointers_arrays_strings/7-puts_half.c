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

	while (str[len]) /* length of the string len */
	{
		len++;
	}
	if (len % 2 == 0) /* get the right number of char to print */
		half = len / 2;
	else
		half = (len - 1) / 2;

	while (half < len) /* prints the second half of the string */
	{
		_putchar(str[half + 1]);
		half++;
	}
	_putchar('\n');
}
