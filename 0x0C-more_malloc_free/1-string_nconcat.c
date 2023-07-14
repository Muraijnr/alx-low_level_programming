#include "main.h"
#include "stdio.h"
#include "stdlib.h"
/**
 * string_nconcat - concatenates 2 strings at n bites
 * @s1: first string
 * @s2: second string
 * @n: number of bites
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, a;
	char *str, *ret;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	
	str = s1;
	for (len1 = 0; *str; str++)
		len1++;

	str = s2;
	for (len2 = 0; *str; str++)
		len2++;
	if (n > len2)
		n = len2;

	ret = malloc((len1 + n + 1) * sizeof(char));
	if (ret == NULL)
		return (0);
	str = ret;
	while (*s1)
		*str++ = *s1++;
	a = 0;
	while (a < n)
	{
		*str++ = s2[a++];
	}
	*str = 0;
	return (ret);
}
