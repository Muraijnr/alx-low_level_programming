#include "main.h"
/**
 * _puts - prints a string followed by new line
 * @str: string to be printed.
 * Return: string and a new line
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
