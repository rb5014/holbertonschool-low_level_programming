#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * free_grid - frees a 2 dim gris previously created by alloc_grid function
 *
 * Description: Compile witg alloc_grid.c
 * @grid: 2 dimensional grid
 * @height: number of rows
 *
 * Return: nothing (void)
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
