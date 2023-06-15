#include <stdio.h>
/**
 * main - prints out a line without using puts or printf
 * Return: 1
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	fputs(str, stdout);
	fputs("\n", stdout);
	return (1);
}
