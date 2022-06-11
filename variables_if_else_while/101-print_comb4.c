#include<stdio.h>

/**
 * main - Entry point : prints all possible diferent comb of digits
 *
 *
 * Return: 0 (always success)
 */

int main(void)
{
	int i, j, k, l = 1;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				if (!(l == 1))
				{
					putchar(',');
					putchar(32); /* 32 == space */
				}
				else
				{
					l = 0;
				}
				putchar(48 + i);
				putchar(48 + j);
				putchar(48 + k);
			}
		}
	}
	putchar('\n');
	return (0);
}
