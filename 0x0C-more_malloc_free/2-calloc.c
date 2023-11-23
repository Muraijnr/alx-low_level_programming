#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _calloc - allocates memory to an array
 * @nmemb: members
 * @size: size of array
 * Return: NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int a = 0, l = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	l = nmemb * size;
	p = malloc(l);

	if (p == NULL)
		return (NULL);
	while (a < l)
	{
		p[a] = 0;
		a++;
	}
	return (p);
}
