#include "main.h"
/**
 * _strcpy - copies one string to another
 * @dest: destination string
 * @src: source string
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int a = -1;

	do {
		a++;
		dest[a] = src[a];
	} while (src[a] != '\0');
	return (dest);
}
