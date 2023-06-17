#include <stdio.h>
/**
 * main - prints out a combination of two two digits
 * Return: 0
 */
int main(void)
{
	for (int a = 0; a < 100; a++)
	{
		int first = a / 100;
		int second = a % 100;

		for (int b = a + 1; b < 100; b++)
		{
			int third = b / 100;
			int fourth = b % 100;

			putchar(first + '0');
			putchar(second + '0');
			putchar(' ');
			putchar(third + '0');
			putchar(fourth + '0');

			if (b != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
