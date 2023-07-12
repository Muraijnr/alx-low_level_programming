#include "main.h"
#include "stdio.h"
#include "stdlib.h"
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: 2nd string
 * Return: NULL or pointer to a combined s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int a, c;
	char *ac, *both;

	ac = s1;
	if (s1)
		while (*ac++)
			a++;
	else
		s1 = "";

	ac = s2;
	if (s2)
		while (*ac++)
			c++;
	else
		s2 = "";

	both = malloc(a + c + 1);
	if (!both)
		return (NULL);
	ac = both;
	while (*s1)
		*ac++ = *s1++;
	while (*s2)
		*ac++ = *s2++;
	*ac = 0;
	return (both);
}
