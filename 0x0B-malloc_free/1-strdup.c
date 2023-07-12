#include "main.h"
#include "stdio.h"
#include "stdlib.h"
/**
 * _strdup - returns duplicate of a string
 * @str: the string to duplicate
 * Return: NULL or a pointer
 */
char *_strdup(char *str)
{
	int a, b;
	char *dup;

	if (str == NULL)/*first if statement*/
		return (NULL);
	a = 0;
	while (str[a] != '\0')/*this checks length of string str*/
		a++;

	dup = malloc(sizeof(char) * (a + 1));/*allocating space using malloc*/

	if (dup == NULL)/*2nd if statement*/
		return (NULL);
	for (b = 0; str[b]; b++)/*this duplicates str to dup*/
		dup[b] = str[b];
	return (dup);
}
