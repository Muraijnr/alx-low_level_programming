#include <stdlib.h>
#include "main.h"

/**
* strtow - converts a string into its separate words
*
* @str: string to convert into words
*
* Return: 2d array pointer
*/
char **strtow(char *str)
{
char **ret, *ptr = str;
int wc = 0, a = 0;

if (str == 0 || *str == 0)
return (0);
while (*ptr)
{
if (!(*ptr == ' ') && (*(ptr + 1) == ' ' || *(ptr + 1) == 0))
wc++;
ptr++;
}
if (wc == 0)
return (NULL);
ret = malloc((wc + 1) * sizeof(char *));
if (ret == 0)
return (0);
while (*str)
{
if (*str != ' ')
{
for (ptr = str, wc = 0; *ptr != ' ' && *ptr != 0;)
wc++, ptr++;
ret[a] = malloc(wc + 1);
if (ret[a] == 0)
{
while (a >= 0)
free(ret[--a]);
free(ret);
return (0);
}
ptr = ret[a++];
while (*str != ' ' && *str != 0)
*ptr++ = *str++;
*ptr = 0;
}
else
str++;
}
ret[a] = 0;
return (ret);
}
