#include "main.h"

/**
 * swap_int - swaps values of two integers
 *
 * @a: pointer to use as a parameter for swap
 * @b: pointer to use as a parameter for swap
 *
 * Return: nothing(void)
 */

void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
