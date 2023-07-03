#include "main.h"
/**
 * _strchr - searchs for a character in a string
 * @s: string to be searched
 * @c: character to be searched
 * Return: s+index
 * Return: NULL
 */
char *_strchr(char *s, char c)
{
	int index;

	index = 0;
	while (s[index] >= '\0')
	{
	if (s[index] == c)
	{
		return (s + index);
	}
		index++;
	}
	return ('\0');
}
