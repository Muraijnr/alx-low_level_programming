#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - allocates memory with exit 98 on failure
 * @b: size to allocate
 * Return: pointer to allocated memory
*/
void *malloc_checked(unsigned int b)
{
void *a;

a = malloc(b);
if(!a)
{
    exit (98);
}
return (a);
}