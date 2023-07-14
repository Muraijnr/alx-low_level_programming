#include "main.h"
#include "stdio.h"
#include "stdlib.h"
/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: elements in the array
 * @size: size of the elements of the array
 * Return: NULL on failure or pointer to the memory allocated
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int a = 0, b = 0;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	b = nmemb * size;/* finds the lenght of the array*/
	ptr = malloc(b);/*allocates size to a pointer that stores array*/

	if (ptr == 0)
		return (0);
	while (a < b)
	{
		ptr[a] = 0;
		a++;
	}
	return (ptr);
}
