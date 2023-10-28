#include "main.h"

/**
 * _isalpha - checks for alphabets
 * @c: character to be checked
 * Return: if alpha
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
