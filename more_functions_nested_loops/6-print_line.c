#include "main.h"

/**
 * print_line - draws a straight line in the terminal; + \n
 *
 * @n: number of times the character _ shoudl be printed
 *
 * Description: if n is 0 or less, only \n
 * Return: nothing (void)
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
