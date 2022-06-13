#include "main.h"
/**
 * more_numbers - prints 10 times from 0 to 14, + \n
 *
 *
 * Return: nothing(void)
 */

void more_numbers(void)
{
	int i, j, d1, d2;

	for (j = 0; j <= 9; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			d1 = i / 10;
			d2 = i % 10;
			if (d1 != 0)
			{
				_putchar('0' + d1);
			}
			_putchar('0' + d2);
		}
		_putchar('\n');
	}
}
