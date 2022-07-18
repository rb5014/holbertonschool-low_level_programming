#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip to get
 * from one number to another.
 * @n: number to flip
 * @m: number to get to with n
 *
 * Return: see description
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flippednum = n ^ m; /* XOR to flip specific bits */
	int count = 0; /* count the number of times a bit is flipped */

	while (flippednum > 0)
	{
		count++;
		flippednum &= (flippednum - 1);
	}
	return (count);
}
