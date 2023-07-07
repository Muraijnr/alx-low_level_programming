#include "main.h"
/**
 * _isalpha - checks if c is alphabet
 * @c: character to be checked
 * Return: 1 if alphabet 0 if otherwise
 */
int _isalpha(int c)

{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
