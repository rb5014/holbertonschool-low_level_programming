#include "main.h"

/**
 * print_triangle - prints a triangle, + \n, with character #
 *
 * @size: parameter giving the size of the triangle
 * if size <= 0 then only \n
 * Return: nothing (void)
 */
void print_triangle(int size)
{
	int i = 1, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	while (i <= size)
	{
		j = 1;
		while (j <= size)
		{
			if (j <= size - i)
				_putchar(32);
			else
				_putchar('#');

			if (j == size)
				_putchar('\n');
			j++;
		}
		i++;
	}



}
