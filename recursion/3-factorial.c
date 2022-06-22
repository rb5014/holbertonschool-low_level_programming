#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * if n < 0, return -1 (error)
 * factorial of 0 is 1
 * @n: given number
 * Return: factorial of the given number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
