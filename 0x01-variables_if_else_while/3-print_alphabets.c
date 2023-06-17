#include <stdio.h>
/**
 * main - prints out alphabets in caps
 * Return: 0
 */
int main(void)
{
	char alpha = 'a';
	char ALPHA = 'A';

	do {
		putchar(alpha);
		alpha++;
	} while (alpha <= 'z');
	do {
		putchar(ALPHA);
		ALPHA++;
	} while (ALPHA <= 'Z');
	putchar('\n');
	return (0);
}
