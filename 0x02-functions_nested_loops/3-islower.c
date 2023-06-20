#include "main.h"
/**
 * _islower - checks if c is lower
 * @c: character that is checked
 * Return: 1 if lowercase and 0 if otherwise
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{

		return (1);
	}
	return (0);
}
