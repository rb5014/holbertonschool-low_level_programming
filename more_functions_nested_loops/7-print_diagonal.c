#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal; + \n
 *
 * @n: number of times the character _ shoudl be printed
 *
 * Description: if n is 0 or less, only \n
 * Return: nothing (void)
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			_putchar(32);
		}
		_putchar('\\');
		_putchar('\n');
	}
}
