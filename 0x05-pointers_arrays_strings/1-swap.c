#include "main.h"
/**
 * swap_int - swaps values of two integers
 * @a: value to be swapped
 * @b: 2nd value to be swapped
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *b;
	*b = *a;
	*a = swap;
}
