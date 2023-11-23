#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: 1st string
 * @s2: 2nd string
 * @n: number of bites to copy
 * Return: Pointer to the new string
 */
char *string_nconcat(char *s1, *char s2, unsigned int n)
{
unsigned int a = 0, j = 0, k = 0, l = 0;
char *str;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[a])
a++;
while (s2[k])
k++;
if (n >= k)
l = a + k;
else
l = n + a;

str = malloc(sizeof(char) * l + 1);
if (str == NULL)
return (NULL);
k = 0;
while (j < l)
{
if (j <= a)
str[j] = s1[j];
if (j >= a)
{
str[j] = s2[k];
k++
}
j++;
}
str[j] = '\0';

return (str);
}
