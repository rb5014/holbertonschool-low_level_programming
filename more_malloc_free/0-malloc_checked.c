#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * malloc_checked - allocates memory using malloc
 * if malloc fails, normal process termination with status value of 98
 * @b: size in bytes to allocate
 *
 * Return: pointer to allocated memory
 *
 */

void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	if (!p)
		exit(98);
	return (p);
}
