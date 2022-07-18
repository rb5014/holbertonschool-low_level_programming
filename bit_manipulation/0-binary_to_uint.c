#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * powbin - raise 2 to the power exp
 * @exp: number of times to multiply 2 with 2
 *
 * Return: the resulting number
 */
unsigned int powbin(int exp)
{
	unsigned int sum = 1;

	if (exp == 0)
		return (1);
	while (exp > 0)
	{
		sum = sum * 2;
		exp--;
	}
	return (sum);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: converted number or 0 if there is one or more chars in b, that is
 * not 0 or 1, or if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0;
	int i, len;


	if (!(b))
		return (0);

	len = strlen(b);
	for (i = 0; b[i]; i++)
	{
		if (b[i] == '1')
			uint += powbin(len - 1 - i);
		else if (b[i] != '0')
			return (0);
	}
	return (uint);
}
