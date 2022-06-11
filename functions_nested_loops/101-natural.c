#include<stdio.h>

/**
 * main - sum all multiples of 3 or 5 below 1024 (excluded) + \n
 *
 * Return: 0 (always success)
 */


int main(void)
{
	int i, sum = 0;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum = sum + i;
	}

	printf("%d", sum);
	return (0);
}
