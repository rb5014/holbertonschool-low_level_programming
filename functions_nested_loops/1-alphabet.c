#include "main.h"

/**
 * print_alphabet - Prints the alphabet followed by a new line
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
		if (c == 'z')
			_putchar('\n');
	}
}
