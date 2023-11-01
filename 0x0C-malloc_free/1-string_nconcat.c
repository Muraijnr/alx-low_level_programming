#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: new string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1, len2, a;
char *ptr, *ret;

if (!s1)
s1 = "";

if (!s2)
s2 = "";

for (len1 = 0, ptr = s1; *ptr; ptr++)
len1++;

for (len2 = 0, ptr = s2; *ptr; ptr++)
len2++;

if (n > len2)
n = len2;

ret = malloc((len1 + n + 1) * sizeof(char));
if (ret == NULL)
return (0);

ptr = ret;

while (*s1)
*ptr++ = *s1++;

a = 0;
while (a < n)
{
*ptr++ = s2[a++];
}
*ptr = 0;

return (ret);
}