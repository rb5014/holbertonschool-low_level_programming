#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates array chars, and initializes it with a specific char.
 *
 * @size: size of the array in bytes
 * @c: element of the array
 *
 * Return: pointer to the array,or NULL if it failsor size == 0
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	ar = malloc(size * sizeof(char));

	for (i = 0; i < size && ar; i++)
		ar[i] = c;
	if (size == 0)
	  return (NULL);
	else
		return (ar);
}
