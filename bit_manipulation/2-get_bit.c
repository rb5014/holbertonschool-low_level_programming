#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: unsigned long int to use
 * @index: index, starting from 0, of the bit we return
 * Return: value of the bit at index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int b = 0;

	if (index > 0)
		b = get_bit(n >> 1, index - 1);
	if (index == 0 && n)
		b = n & 1;
	else if (n == 0 && index > 0)
		return (-1);

	return (b);
}
