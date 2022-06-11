#include<stdio.h>

/**
 * main - Entry point : prints all possible diferent comb of digits
 *
 *
 * Return: 0 (always success)
 */

int main(void)
{
	int i, j, l = 1;

	for (i = 0; i <= 9; i++)
	{

		for (j = 0; j <= 9; j++)
		{
			if (i < j)
			{
				if (!(l == 1))
				{
					putchar(',');
					putchar(32); /* 32 == space */
				}
				else
					l = 0;
				putchar(48 + i);
				putchar(48 + j);
			}
		}
	}

	return (0);
}
