#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array, using malloc
 *
 * @nmemb: number of element
 * @size: size of each element
 *
 * Return: pointer to a newly allocated memory for an array of nmemb
 * of size bytes
 * if malloc fails, or nmemb or size is 0, then _calloc returns NULL.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;

	p = malloc(nmemb * size);
	if (p)
		return (p);

	return (NULL);
}
