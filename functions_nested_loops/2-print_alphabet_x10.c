#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet followed by a new line, ten times
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char c;

		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
			if (c == 'z')
				_putchar('\n');
		}
		i++;
	}
}
