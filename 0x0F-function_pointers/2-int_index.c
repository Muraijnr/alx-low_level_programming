#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - checks an array for an integer that matches the
 * given integer
 * @array: array to search
 * @size: it's size
 * @cmp: comparison function that checks
 * Return: index of match or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (cmp != NULL && array != NULL)
		for (a = 0; a < size; a++)
			if (cmp(array[a]))
				return (1);
	return (-1);
}
