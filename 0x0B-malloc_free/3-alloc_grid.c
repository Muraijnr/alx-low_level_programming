#include "main.h"
#include "stdio.h"
#include "stdlib.h"
/**
 * alloc_grid - returns a pointer that stores a two dimensional array
 * @width: 1st array
 * @height: 2nd array
 * Return: NULL or the pointer
 */
int **alloc_grid(int width, int height)
{
	int a, b;
	int **ab;

	if (width <= 0 || height <= 0)
		return (NULL);

	ab = malloc(sizeof(int *) * height);
	if (ab == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		ab[a] = malloc(sizeof(int) * width);
		if (ab[a] == NULL)
		{
			for (; a >= 0; a--)
				free(ab[a]);
			free(ab);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		{
			ab[a][b] = 0;
		}
	}
	return (ab);
}
