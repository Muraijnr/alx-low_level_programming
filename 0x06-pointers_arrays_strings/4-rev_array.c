#include "main.h"
/**
 * reverse_array - reverses the content of array of integers
 * @a: array to be reversed
 * @n: number of elements in the integer.
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int c;
	int b;

	for (c = 0; c < n--; c++)
	{
		b = a[c];
		a[c] = a[n];
		a[n] = b;
	}
}
