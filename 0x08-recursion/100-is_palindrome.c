#include "main.h"
#include "stdio.h"
int compare(char *s, int a1, int a2);

/**
 * _strlen_recursion - gives the string length
 * @s: the string
 * Return: length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * compare - compares the characters from front and back
 * @s: string
 * @a1: front characters
 * @a2: back characters
 * Return: 1 or 0
 */
int compare(char *s, int a1, int a2)
{
	if (*(s + a1) == *(s + a2))
	{
		if (a1 == a2 || a1 == a2 + 1)
			return (1);
		return (0 + compare(s, a1 + 1, a2 - 1));
	}
	return (0);
}
/**
 * is_palindrome - determines if s is a palindrom or not
 * @s: the string
 * Return: 1 for palindrome and 0 for otherwise
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare(s, 0, _strlen_recursion(s) - 1));
}
