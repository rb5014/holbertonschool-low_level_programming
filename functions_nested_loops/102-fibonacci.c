#include<stdio.h>

/**
 * main - prints 50 1st Fibonacci numbers, start 1 and 2, +\n
 *
 * Return: 0 (always success)
 */


int main(void)
{
	unsigned int i, f1 = 1, f2 = 2, f3, firsttime = 1;

	for (i = 0; i < 48; i++)
	{
		if (firsttime == 1)
		{
			printf("%u, %u", f1, f2);
			firsttime = 0;
		}
		else
		{
			printf(", ");
	       		f3 = f1 + f2;
			printf("%u", f3);
			f1 = f2;
			f2 = f3;
		}
	}
	printf("\n");

	return (0);
}
