#include<stdio.h>
#include<math.h>

/**
 * main - finds and prints the largest prime factor of 612852475143, + \n
 *
 *
 * Return: 0 (always success)
 */

int main(void)
{
	unsigned long n, i = 2;

	for (n = 612852475143; n > 1; i++)
	{
		while ((n % i) == 0)
		{
			n = n / i;
			if (n == 1)
				printf("%lu\n", i);
		}
	}
	return (0);
}
