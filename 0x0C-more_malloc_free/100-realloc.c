#include "main.h"
#include "stdio.h"
#include "stdlib.h"
/**
 * _realloc - reallocates a memory block using malloc
 * @ptr: pointer to previous memory
 * @old_size: allocated space for ptr
 * @new_size: new size in bytes
 * Return: 0
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nmem;
	unsigned int a;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		nmem = malloc(new_size);

		if (nmem == NULL)
			return (NULL);
		return (nmem);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
	nmem = malloc(new_size);

	if (nmem == NULL)
		return (NULL);
	for (a = 0; a < old_size && a < new_size; a++)
	{
		nmem[a] = ((char *) ptr)[a];
	}
	free(ptr);
	return (nmem);
}
