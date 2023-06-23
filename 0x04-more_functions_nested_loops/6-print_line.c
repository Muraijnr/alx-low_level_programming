#include "main.h"
/**
 * print_line - straight -line
 * @n: number of times to print _
 * Result: 0
 */
void print_line(int n)
{
	int l;

	for (l = 0; l < n; l++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
