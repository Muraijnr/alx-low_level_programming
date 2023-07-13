#include "main.h"
#include "stdio.h"
#include "stdlib.h"
/**
 * count_words - counts words available in string
 * @s: string
 * Return: words
 */
int count_words(char *s)
{
	int words, flag, a;

	flag = 0;
	words = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			words++;
		}
	}
	return (words);
}
/**
 * strtow - splits a string into words
 * @str: the string
 * Return: pointer or NULL
 */
char **strtow(char *str)
{
	char **mat, *tmp;
	int a, b = 0, l = 0, word, c = 0, start, end;

	while (*(str + l))
		l++;
	word = count_words(str);
	if (word == 0)
		return (NULL);
	mat = (char **)malloc(sizeof(char *) * (word + 1));
	if (mat == NULL)
		return (NULL);
	for (a = 0; a <= l; a++)
	{
		if (str[a] == ' ' || str[a] == '\0')
		{
			if (c)
			{
				end = a;
				tmp = (char *)malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				mat[b] = tmp - c;
				b++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = a;
	}
	mat[b] = NULL;
	return (mat);
}
