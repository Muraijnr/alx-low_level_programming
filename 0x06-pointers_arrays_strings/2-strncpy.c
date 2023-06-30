#include "main.h"
/**
 * _strncpy - copies one string to another
 * @dest: first string
 * @src: second string
 * @n: bites in consideration
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;
	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
