#include "main.h"
#include <limits.h>
/**
 * get_bit - returns the value of a bit at a given index
 * @n: unsigned long int to use
 * @index: index, starting from 0, of the bit we return
 * Return: value of the bit at index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int b;
	int range = 63 - index;


	if (range < 0) /* check if index is out of range) */
		return (-1);
	b = n >> index;
	if (b % 2 == 1)
		return (1);
	else
		return (0);
}
