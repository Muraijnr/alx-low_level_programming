#include "function_pointers.h"
#include "stdio.h"
/**
 * int_index - searchs for integer
 * @array: pointer to an array
 * @size: number of elements of the array
 * @cmp: pointer to a function
 * Return: -1 or index of first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
			return (a);
	}
	return (-1);
}
