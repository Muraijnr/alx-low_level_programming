#include <stdlib.h>
#include "main.h"
/**
 * _realloc -reallocates some block of memory to a different block
 * @ptr: old memory
 * @old_size: size of previous memory
 * @new_size: new size 
 * Return: pointer to new memory allocated
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *ret = 0;
char *write, *read;

if (new_size == old_size)
return (ptr);

if (new_size > 0 || ptr == 0)
{
ret = malloc(new_size);
if (ret == NULL)
return (0);
}

if (new_size > 0 && ptr != 0)
{
write = ret;
read = ptr;
if (new_size < old_size)
old_size = new_size;
while (old_size)
{
old_size--;
*write++ = *read++;
}

}
free (ptr);
return (ret);
}