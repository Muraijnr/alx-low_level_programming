#include "main.h"
#include "stdio.h"
/**
 * _strchr - start point
 * @s: input
 * @c: inputc
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int a;

	a = 0;

	for (; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (&s[a]);
	}
	return (0);
}
