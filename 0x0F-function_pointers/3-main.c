#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - runs calculations on a string
 * @ac: number of arguments
 * @av: array of argument strings
 * Return: 0
 */
int main(int ac, char *av[])
{
	int a, b;
	int (*f)(int, int);

	if (ac != 4)
	{
		printf("error\n");
		return (98);
	}
	a = atoi(av[1]);
	b = atoi(av[3]);
	f = get_op_func(av[2]);

	if (f == NULL || av[2][1] != 0)
	{
		printf("Error\n");
		return (98);
	}
	if ((av[2][0] == '/' || av[2][0] == '%') && j == 0)
	{
		printf("Error\n");
		return (98);
	}

	printf("%d\n", f(a, b));
	return (0);
}
