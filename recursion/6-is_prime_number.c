#include "main.h"

/**
* prime - returns 1 if the input integer is a prime number,
* otherwise 0;
*
* @n: original value to hold
* @n2: number to use to find prime
* Return: one if succes, zero if not
*/

int prime(int n, int n2)
{
	if (n2 == n)
		return (1);
	if (n / n2 > 1 && n % n2 == 0)
		return (0);
	return (prime(n, n2 + 1));
}

/**
 * is_prime_number - returns the output of prime fonction
 *
 * @n : original value
 * Return: one if success, zero if not
 */

int is_prime_number(int n)
{
	int n2 = 2;

	if (n <= 1)
		return (0);
	return (prime(n, n2));
}
