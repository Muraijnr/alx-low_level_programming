#include "main.h"
/**
 * _strpbrk - searchs a string for any of a set bytes
 * @s: string to be considered for search
 * @accept: set bytes
 * Return: s if found NULL if not found
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
