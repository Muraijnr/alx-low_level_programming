#include "function_pointers.h"
#include "stdio.h"
/**
 * array_iterator - exuctes a function given as parameter
 * @array: array given
 * @size: size of array
 * @action: the function pointer
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	if (array == NULL || action == NULL)
		return;
	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
