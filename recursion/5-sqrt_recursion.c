#include "main.h"

/**
 * _sqrt - returns the natural square root of a number
 *
 * @n: given number
 * @sq: square root to find
 * Return: natural square root of n, or -1 if n doesn't have a natural square
 * root
 */

unsigned int _sqrt(int n, int sq)
{
	if (sq == n)
		return (-1);
	if (sq * sq == n)
		return (sq);

	return (_sqrt(n, sq + 1));
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
	int sq = 1;

	if (n == 1)
		return (1);
	if (n < 1)
		return (-1);
	return (_sqrt(n, sq));
}
