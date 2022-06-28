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
	int i, j;

	if (width == 0 || height == 0)
		return (NULL);

	ar = (int **)malloc(height * sizeof(int *));

	if (ar)
	{
		for (i = 0; i < height; i++)
		{
			ar[i] = (int *)malloc(width * sizeof(int));
			for (j = 0; j < width; j++)
				ar[i][j] = 0;
		}
		return (ar);
	}
	else
	{
		free(ar);
		return (NULL);
	}
}
