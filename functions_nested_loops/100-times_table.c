#include "main.h"

/**
 * print_times_table - function that prints the n times table, starting with 0.
 *
 *@n: parameter tobe checked
 * Return: nothing
 */
void print_times_table(int n)
{
	int c, l, res; /* colonne, ligne et résultats */
	int d1, d2, d3; /* 1st, 2nd and 3rd digit */

	if (n > 15 || n < 0)
		return;

	for (l = 0; l <= n; l++)
	{
		for (c = 0; c <= n; c++)
		{
			res = c * l;
			d1 = res / 100;
			d2 = (res % 100) / 10;
			d3 = res % 10;
			if (c != 0)
			{
				_putchar(',');
				_putchar(32);
				if (d1 != 0)
				{
					_putchar(48 + d1);
					_putchar(48 + d2);
				}
				else if (d1 == 0 && d2 == 0)
				{
					_putchar(32);
					_putchar(32);
				}
				else
				{
					_putchar(32);
					_putchar(48 + d2);
				}
			}
			_putchar(48 + d3);
		}
		_putchar('\n');
	}
}
