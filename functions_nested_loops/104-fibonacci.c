#include<stdio.h>

/**
 * main - prints 50 1st Fibonacci numbers, start 1 and 2, +\n
 *
 * Return: 0 (always success)
 */


int main(void)
{
	long double f1 = 1, f2 = 2, f3;
	int firsttime = 1, i;

	for (i = 0; i <= 96; i++)
	{
		if (firsttime == 1)
		{
			printf("%.0Lf, %.0Lf", f1, f2);
			firsttime = 0;
		}
		else
		{
			printf(", ");
			f3 = f1 + f2;
			printf("%.0Lf", f3);
			f1 = f2;
			f2 = f3;
		}
	}
	printf("\n");

	return (0);
}
