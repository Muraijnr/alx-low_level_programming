#include "main.h"

/**
 * _memset - fills a block of memory with a value
 * @s: address of mem to be filled
 * @b: desired value
 * @n: number of bites to be filled
 * Return: array with value
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; a > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);

}
