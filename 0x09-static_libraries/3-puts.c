#include "main.h"

/**
 * _puts - program prints a string to the stdout
 * @str: the string
 * _putchar - prints new line
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
