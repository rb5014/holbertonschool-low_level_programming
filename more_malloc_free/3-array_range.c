#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - creates an array of integers
 * The array created should contain all the values from min(included)
 * tomax (included), ordered from min to max
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to the newly created array
 * of size bytes
 * if malloc fails or min > max the return NULL
 */

int *array_range(int min, int max)
{
	int i = 0, len = max - min + 1; /* +1 because min and max included */
	int *p;

	if (min > max)
		return (NULL);

	p = malloc(len * sizeof(int));
	if (!p)
		return (NULL);

	while (i < len)
	{
		p[i] = min + i;
		i++;
	}
	return (p);
}
