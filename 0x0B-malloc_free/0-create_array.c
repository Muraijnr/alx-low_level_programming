#include "main.h"
#include "stdio.h"
#include "stdlib.h"
/**
 * create_array - creates a array of chars and initializes it
 * @size: size of array
 * @c: the array
 * Return: pointer or NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *ray;

	ray = malloc(sizeof(char) * size);
	if (size == 0 || ray == NULL)
		return (NULL);
	for (a = 0; a < size; a++)
		ray[a] = c;
	return (ray);
}
