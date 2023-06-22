#include "main.h"
/**
 * times_table - prints times table
 * Return: empty output
 */
void times_table(void)
{
	int rows = 10;
	int cols = 10;

	int a, b, result;

	for (a = 0; a < rows; a++)
	{
		for (b = 0; b < cols; b++)
		{
			result = a * b;

			if (result < 10)
			{
				_putchar('0' + result);
			}
			else
			{
				_putchar('0' + result / 10);
				_putchar('0' + result % 10);
			}
			if (b < cols - 1)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
