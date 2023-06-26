#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: string to be reversed
 * Return: the string in reverse
 */
void print_rev(char *s)
{
	int first = 0;

	while (s[first])
		first++;
	while (first--)
		_putchar(s[first]);
	_putchar('\n');
}
