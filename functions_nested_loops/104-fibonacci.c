#include<stdio.h>

/**
 * main - prints 50 1st Fibonacci numbers, start 1 and 2, +\n
 *
 * Return: 0 (always success)
 */


int main(void)
{
	double f1 = 1, f2 = 2, f3;
	int i;

	for (i = 0; i <= 96; i++)
	{
		if (i == 0)
		{
			printf("%.0f, %.0f", f1, f2);
		}
		else
		{
			printf(", ");
			f3 = f1 + f2;
			printf("%.0f", f3);
			f1 = f2;
			f2 = f3;
		}
	}
	printf("\n");

	return (0);
}
