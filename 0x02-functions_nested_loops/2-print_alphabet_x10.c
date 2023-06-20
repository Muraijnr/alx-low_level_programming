#include "main.h"
/**
 * print_alphabet_x10 - print alphabet x10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	char alpha;
	int b;

	b = 0;

	while (b < 10)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
		_putchar(alpha);
		}
		_putchar('\n');
		b++;
	}
}
