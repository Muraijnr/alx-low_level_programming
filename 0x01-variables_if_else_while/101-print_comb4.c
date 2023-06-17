#include <stdio.h>
/**
 * main - prints a combination of three numbers
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
			int a = b + 1;

			while (b < 10)
			{
				putchar(c + '0');
				putchar(b + '0');
				putchar(a + '0');
				if (c != 7 || b != 8 || a != 9)
				{
					putchar(',');
					putchar(' ');
				}

				a++;
			}

			b++;
		}

		c++;
	}
	putchar('\n');
	return (0);
}
