#include "main.h"
/**
 * puts2 - prints a string exceptionally
 * @str: a pointer to the string to be printed
 * Return: 0
 */
void puts2(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);
		}
		a++;
	}
	_putchar('\n');
}
