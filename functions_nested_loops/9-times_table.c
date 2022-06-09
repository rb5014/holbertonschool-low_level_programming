#include "main.h"

/**
 * times_table - function that prints the 9 times table, starting with 0.
 *
 *
 * Return: nothing
 */
void times_table(void)
{
	int c, l, res; /* colonne, ligne et résultats */

	for (l = 0; l <= 9; l++)
	{
		for (c = 0; c <= 9; c++)
		{
			if (c != 0 && c <= 9)
			{
				_putchar(',');
				_putchar(32);
			}
			res = c * l;
			if (c != 0 && res > 9)
			{
				_putchar(48 + res / 10);
				_putchar(48 + res % 10);
			}
			else if (c != 0 && res <= 9)
			{
				_putchar(32);
				_putchar(48 + res);
			}
			else
			{
				_putchar(48 + res);
			}

		}
		_putchar('\n');

	}
}
