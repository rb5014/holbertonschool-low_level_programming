#include<stdio.h>

/**
 * main - prints 50 1st Fibonacci numbers, start 1 and 2, +\n
 *
 * Return: 0 (always success)
 */


int main(void)
{
	long double f1 = 1, f2 = 2, f3;
	int i;

	for (i = 0; i <= 96; i++)
	{
		if (i == 0)
		{
			printf("%.0Lf, %.0Lf", f1, f2);
		}
		else
		{
			printf(", ");
			f3 = f1 + f2;
			if (i == 91)
			{
				printf("%.0Lf", f3 - 1);
			}
			else
			{
				printf("%.0Lf", f3);
			}
			f1 = f2;
			f2 = f3;
		}
	}
	printf("\n");

	return (0);
}
