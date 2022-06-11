#include<stdio.h>

/**
 * main - prints 50 1st Fibonacci numbers, start 1 and 2, +\n
 *
 * Return: 0 (always success)
 */


int main(void)
{
	unsigned long f1 = 1, f2 = 2, f3 = 0, even = 0;
	int i;

	while (f1 <= 4000000 && f2 <= 4000000)
	{
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
		if (i % 3 == 0)
			even = even + f3;
		i++;
	}
	printf("%lu\n", even);
	return (0);
}
