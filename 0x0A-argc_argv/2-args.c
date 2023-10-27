#include <stdio.h>

/**
 * main - print arguments passed
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	int a = -1;

	while (++a < argc)
		printf("%s\n", argv[a]);
	return (0);
}
