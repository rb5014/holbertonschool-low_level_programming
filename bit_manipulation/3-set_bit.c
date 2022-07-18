#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: pointer to a number
 * @index: the index, starting from 0 of the bit you want to set
 *
 *Return: 1 if it worked, -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int range = 63 - index;


	if (range < 0) /* check if index is out of range) */
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
