#include "main.h"
/**
 * _memset - fills memory with a constant bite
 * @s: pointer
 * @b: constant bite b
 * @n: number of bites
 * Return: pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;

for (a = 0; a < n; a++)
{
s[a] = b;
} 
return (s);
}
