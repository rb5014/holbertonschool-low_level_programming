#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98, followed
 * by a new line.
 *
 * @n: parameter to be computed to get the last digit
 * Return: nothing (void)
 */
void print_to_98(int n)
{
	while (n <= 98)
	{
		printf("%d", n);
		if (n != 98)
			printf(", ");
		n++;
	}
	printf("\n");
}
