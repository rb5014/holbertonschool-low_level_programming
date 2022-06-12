#include<stdio.h>

/**
 * main - prints 50 1st Fibonacci numbers, start 1 and 2, +\n
 *
 * Return: 0 (always success)
 */


int main(void)
{
	unsigned long int f1 = 1, f1a, f1b, f2 = 2, f2a, f2b, f3, f3a, f3b;
	int i;

	for (i = 0; i <= 97; i++)
	{
		if (i == 0)
		{
			printf("%lu, %lu", f1, f2);
		}
		else if (i <= 91)
		{
			f1a = f1 / 100000;
			f1b = f1 % 100000;
			f2a = f2 / 100000;
			f2b = f2 % 100000;
			printf(", ");
			f3 = f1 + f2;
			printf("%lu", f3);
			f1 = f2;
			f2 = f3;
		}
		else
		{
			printf(", ");
			f3a = (f1a + f2a);
			f3b = (f1b + f2b);
			printf("%lu%lu", f3a, f3b);
			f1a = f2a;
			f1b = f2b;
			f2a = f3a;
			f2b = f3b;
		}
	}
	printf("\n");

	return (0);
}
