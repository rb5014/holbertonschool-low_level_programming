#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 * Description: Each element of the grid should be initialized to 0
 * @width: number of columns
 * @height: number of lines
 *
 * Return: see description, + NULL on failure, or if width or height is 0
 */

int **alloc_grid(int width, int height)
{
	int **ar;
	int i;

	if (width == 0 || height == 0)
		return (NULL);

	ar = malloc(height * sizeof(int));

	if (ar)
	{
		for (i = 0; i < height; i++)
			ar[i] = malloc(width * sizeof(int));
		return (ar);
	}
	else
		return (NULL);
}
