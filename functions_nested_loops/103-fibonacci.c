#include<stdio.h>

/**
 * main - prints the sum of fibonacci even numbers under 4000000
 *
 * Return: 0 (always success)
 */


int main(void)
{
	unsigned long f1 = 0, f2 = 1, f3 = 0, sumeven = 0;

	while (f3 <= 4000000)
	{
		if (f2 % 2 == 0)
			sumeven += f2;
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
	}
	printf("%lu\n", sumeven);
	return (0);
}
