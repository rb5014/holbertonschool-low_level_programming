#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		switch (c)
		{
		case 'e':
			break;
		case 'q':
			break;
		default:
			putchar(c);
		}
		if (c == 'z')
			putchar('\n');
	}
	return (0);
}
