#include "main.h"

/**
 * print_square - prints a square, + \n, with character #
 *
 * @size: parameter giving the size of the square
 * if size <= 0 then only \n
 * Return: nothing (void)
 */
void print_square(int size)
{
	int i;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= size * size; i++)
	{
		if (i % size == 0)
		{
			_putchar('#');
			_putchar('\n');
		}
		else
			_putchar('#');
	}
}
