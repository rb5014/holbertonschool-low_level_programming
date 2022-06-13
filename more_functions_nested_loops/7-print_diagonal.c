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

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			j = 0;
			while (j < i)
			{
				_putchar(32);
				j++;
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
