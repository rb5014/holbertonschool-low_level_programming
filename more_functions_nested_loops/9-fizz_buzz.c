#include<stdio.h>

/**
 * main - Entry point - prints 1 to 100, + \n
 * Description: Fizz for multiples of 3, Buzz for multiples of 5, FizzBuzz both
 *
 * Return: 0 (always success)
 */

int main(void)
{
	int i, first = 1;

	for (i = 1; i <= 100; i++)
	{
		if (first != 1)
			printf(" ");
		else
			first = 0;

		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
	}
	putchar('\n');
	return (0);
}
