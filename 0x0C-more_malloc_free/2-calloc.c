#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocate memory
 * @nmemb: number of memory blocks
 * @size: size of blocks
 * Return: pointer to allocated memory block
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ret;
char *ptr;
unsigned int a;

if (nmemb == 0 || size == 0)
return (0);

ret = malloc(nmemb * size);
if (ret == 0)
return (0);

for (a = nmemb * size, ptr = ret; a; a--)
*ptr++ = 0;
return (ret);
}