#include "main.h"
#include <stdio.h>
/**
 * print_array - prints elements of an array
 * @a: input array
 * @n: length of array
 * Return: 0
 */
void print_array(int *a, int n)
{
	int index_of_array = 0;

	while (index_of_array < n)
	{
		printf("%d", a[index_of_array]);
		if (index_of_array != (n - 1))
		{
			printf(", ");
		}
		index_of_array++;
	}
	printf("\n");
}
