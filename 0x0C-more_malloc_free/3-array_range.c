#include "main.h"
#include "stdio.h"
#include "stdlib.h"
/**
 * array_range -creates an array of integers
 * @min: value range with min included
 * @max: value range with max included
 * Return: pointer or null
 */
int *array_range(int min, int max)
{
	int *arr, *num;
	int size;

	size = max - min + 1;

	if (min > max)
		return (NULL);

	arr = malloc(size * sizeof(int));
	if (arr == NULL)
		return (NULL);
	num = arr;
	while (size--)
		*num++ = max - size;
	return (arr);
}
