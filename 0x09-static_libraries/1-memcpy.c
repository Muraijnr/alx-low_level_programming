#include "main.h"
/**
 * _memcpy - string to be copied
 * @dest: dest string
 * @src: source of character
 * @n: bites to be concidered
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
