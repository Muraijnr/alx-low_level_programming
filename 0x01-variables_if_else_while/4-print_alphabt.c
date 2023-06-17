#include <stdio.h>
/**
 * main - prints alphabets apart from q and e
 * Return: 0
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha != 'e' && alpha != 'q')
			putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
