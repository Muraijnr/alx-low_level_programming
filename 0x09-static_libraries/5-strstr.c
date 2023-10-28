#include "main.h"

/**
 * _strstr - program entry point
 * @haystack: input
 * @needle: input
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	char *a = haystack;
	char *b = needle;

for (; *haystack != '\0'; haystack++)
{
	while (*a == *b && *b != '\0')
	{
		a++;
		b++;
	}
	if (*b == '\0')
		return (haystack);
}
return (0);
}
