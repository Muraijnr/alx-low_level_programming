#include "main.h"
#include "stdio.h"
#include "stdlib.h"
/**
 * argstostr - concatenates arguments
 * @ac: argument count
 * @av: argument
 * Return: Null or a pointer to a string
 */
char *argstostr(int ac, char **av)
{
	int a, b, c, l;
	char *str;

	c = 0, l = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			l++;
	}
	l += ac;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			str[c] = av[a][b];
			c++;
		}
		if (str[c] == '\0')
		{
			str[c++] = '\n';
		}
	}
	return (str);
}
