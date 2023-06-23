#include "main.h"
/**
 * more_numbers - prints 0-14 10 times
 * Result: 0
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
			{
				_putchar('1');
				_putchar('0' + j % 10);
			}
			else
				_putchar('0' + j);
		}
		_putchar('\n');
	}
}
