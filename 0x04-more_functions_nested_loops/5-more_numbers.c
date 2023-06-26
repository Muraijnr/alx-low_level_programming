#include "main.h"
/**
 * more_numbers - prints 0-14 10 times
 * Result: 0
 */
void more_numbers(void)
{
	int i = 0;
	int j;

	while (i < 10)
	{
		for ( j = 1; j <= 14; j++)
		{
			if (j >= 10)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
		}
		i++;
		_putchar('\n');
	}
	return (0);
}
