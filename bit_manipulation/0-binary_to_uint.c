#include "main.h"
#include <math.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: converted number or 0 if there is one or more chars in b, that is
 * not 0 or 1, or if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int uint = 0;

	if (!(b))
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] == '1')
			uint += pow(2, i);
		else if (b[i] != '0')
			return (0);
	}
	return (uint);
}
