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
	unsigned int a = 0, c = 0;
	char *ac, *both;

	ac = s1;
	if (s1)/*this checks length of s1*/
		while (*ac++)
			a++;
	else/*if s1 is empty it returns NULL*/
		s1 = "";

	ac = s2;
	if (s2)/*checks length of s2*/
		while (*ac++)
			c++;
	else/*if empty,it returns NULL*/
		s2 = "";

	both = malloc(a + c + 1);/*allocates size to a pointer*/
	if (!both)/*if both strings are empty,returns NULL*/
		return (NULL);

	ac = both;
	while (*s1)/* copy's s1 to our pointer ac*/
		*ac++ = *s1++;
	while (*s2)/*copy's s2 to part of ac*/
		*ac++ = *s2++;
	*ac = 0;
	return (both);
}
