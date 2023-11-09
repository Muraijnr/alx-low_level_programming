#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes an array function as parameter
 * @array: array to act on
 * @size: size of array
 * @action: function to execute array from
 * Return: NULL
 */
void array_iterator(int *array, size_t size, void(*action)(int))
{
	size_t a;

	if (action != 0 && array != 0)
		for (a = 0; a < size; a++)
			action(array[a]);
}
