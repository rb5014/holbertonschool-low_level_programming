#include "main.h"

/**
 * _sqrt - returns the natural square root of a number
 *
 * @n: given number
 * @sq: square root to find
 * Return: natural square root of n, or -1 if n doesn't have a natural square
 * root
 */

int _sqrt(int n, int sq)
{
	if (sq <= 0)
		return (-1);
	else if (n / sq == sq && n % sq == 0)
		return (sq);
	else
		return (_sqrt(n, sq - 1));
}

/**
 *_sqrt_recursion - returns the result of _sqrt
 * which is the natural square root
 *
 * @n: given number
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, n));
}
