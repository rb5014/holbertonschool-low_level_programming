#include<stdio.h>

/**
 * main - prints 50 1st Fibonacci numbers, start 1 and 2, +\n
 *
 * Return: 0 (always success)
 */


int main(void)
{
	unsigned long f1 = 1, f2 = 2, f3, even = 0;
	int i;

	for (i = 0; f3 <= 4000000; i++)
	{
			f3 = f1 + f2;
			f1 = f2;
			f2 = f3;
			if (i % 3 == 0)
				even = even + f3;
	}
	printf("%lu\n", even);

	return (0);
}