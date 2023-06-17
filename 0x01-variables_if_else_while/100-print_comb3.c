#include <stdio.h>
/**
 * main - prints combination of two digits
 * Return: 0
 */
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		int b = c + 1;

		while (b < 10)
		{
			putchar(c + '0');
			putchar(b + '0');
			if (c != 8 || b != 9)
			{
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		c++;
	}
	putchar('\n');
	return (0);
}
