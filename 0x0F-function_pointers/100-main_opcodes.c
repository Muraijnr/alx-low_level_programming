#include <stdio.h>
#include <stdlib.h>

/**
 * main - print hex opcodes upto n bites
 * @ac: number of arguments
 * @av: argument array
 * Return: 0 on success
 */
int main(int ac, char *av[])
{
	unsigned char *f = (unsigned char *)(long int) main;
	int n, a;

	if (ac != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(av[1]);

	if (n < 0)
	{
		printf("Error\n");
		return (2);
	}
	if (n > 0)
	{
		printf("%02x", *f++);
	}
	for (a = 0; a < n; a++)
		printf("%02x", f++);
	if (n > 0)
		printf("\n");
	return (0);
}
