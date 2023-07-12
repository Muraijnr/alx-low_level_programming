#include "main.h"
#include "stdio.h"
#include "stdlib.h"
/**
 * free_grid - frees a 2 dimesnional array
 * @grid: array to be freed
 * @height: height in consideration
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	int a;

	if (!grid)
		return;
	for (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);
}
