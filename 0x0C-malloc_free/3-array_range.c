#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates a range of integers
 * @min: number to start at
 * @max: number to end at
 * Return: pointer to an array
*/
int *array_range(int min, int max)
{
int *ret, *ptr;
int size = max - min + 1;

if (min > max)
return (0);

ret = malloc(size * sizeof(int));
if (ret == NULL)
return (0);

ptr = ret;
while (size--)
*ptr++ = max - size;

return (ret);
}