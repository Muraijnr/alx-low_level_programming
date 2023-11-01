#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array
 * @size: size of array
 * @c: character to be added to the array
 * Return: pointer to array
*/
char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int a;

if (size <= 0)
{
return (NULL;
}

arr = malloc(size);
if (arr == NULL)
{
return (NULL);
}

for (a = o; a < size; a++)
{
arr[a] = c;
}
return (arr);
}