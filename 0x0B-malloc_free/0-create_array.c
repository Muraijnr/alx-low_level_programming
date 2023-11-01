#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of size size
 *
 * @size: size of array
 * @c: char to fill array with
 *
 * Return: pointer to first element
 */
char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int a;

if (size <= 0)
return (NULL);

arr = malloc(size);
if (arr == NULL)
return (NULL);

for (a = 0; a < size; a++)
arr[a] = c;

return (arr);
}