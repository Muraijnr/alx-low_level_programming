#include <stdio.h>
/**
 * main - prints alphabet using putchar
 * Return: 0
 */
int main(void)
{
	char alpha = 'a';

	do {
		putchar(alpha);
		alpha++;
	} while (alpha <= 'z');
	putchar('\n');
	return (0);
}
