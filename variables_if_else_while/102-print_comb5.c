#include<stdio.h>

/**
 * main - Entry point : prints all possible diferent comb of digits
 *
 *
 * Return: 0 (always success)
 */

int main(void)
{
	int i, j, d1, d2, a = 1;

	for (i = 0; i <= 99; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			if (!(a == 1))
			{
				putchar(',');
				putchar(32); /* 32 == space */
			}
			else
			{
				a = 0;
			}
			d1 = (i / 10);
			d2 = (i % 10);
			putchar(48 + d1);
			putchar(48 + d2);
			putchar(32);
			d1 = (j / 10);
			d2 = (j % 10);
			putchar(48 + d1);
			putchar(48 + d2);
		}
	}
	putchar('\n');
	return (0);
}
