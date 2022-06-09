#include "main.h"

/**
 *  jack_bauer - function that prints the last digit of a number
 *
 *
 * Return: n (the value of the last digit)
 */
void jack_bauer(void)
{
	char i = '0', j, k, l;

	while (i <= '2')
	{
		j = '0';
		while (j <= '9')
		{
			k = '0';
			while (k <= '5')
			{
				l = '0';
				while (l <= '9')
				{
					if (i == '2' && j == '4')
					{
						return;
					}
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(l);
					_putchar('\n');
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
}
