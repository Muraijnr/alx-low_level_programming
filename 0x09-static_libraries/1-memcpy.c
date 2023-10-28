#include "main.h"

/**
 * _memcpy - copies mem area
 * @dest: memory where its stored
 * @src: to be copied
 * @n: number of bites
 * Return: copied mem
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
