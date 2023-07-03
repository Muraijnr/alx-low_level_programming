#include "main.h"
/**
 * print_diagsums - prints sum of two diagonals
 * @a: the array
 * @size: size of array
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int index, add1 = 0, add2 = 0;

	for (index = 0; index < size; index++)
	{
		add1 += a[index];
		a += size;
	}
	for (index = 0; index < size; index++)
	{
		add2 += a[index];
		a -= size;
	}
	printf("%d, %d\n", add1, add2);
}
