#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sumof the two diagonals of a square
 * matrix of integers
 *@a: pointer of an array
 *@size: numberof elements to print
 * Return: nothing(void)
 */

void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0;

	for (i = 0, j = 0; j < size; i++, j++)
	{
		sum1 = sum1 + *(a + i + size * j);
	}
	printf("%d, ", sum1);
	for (j = 0, i--; i >= 0; j++, i--)
	{
		sum2 = sum2 + *(a + i + size * j);
	}
	printf("%d\n", sum2);
}
