#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints addition of positive numbers
 * @argc: argument counter
 * @argv: arguments
 * Return: 0 if no errors and 1 if errors
 */
int main(int argc, char **argv)
{
	int a, b, sum = 0;

	for (a = 1; a < argc; a++)
	{
		if (!(arg[a][0] >= '0' && argv[a][0] <= '9')
				&& argv[a][0] != '-')
		{
			printf("Error\n");
			return (1);
		}
		for (b = 1; argv[a][b] != 0; b++)
			if (argv[a][b] < '0' || argv[a][b] > '9')
			{
				printf("Error\n");
				return (1);
			}
	}
	for (a 1; a < argc; a++)
		sum += atoi(arg[a]);
	printf("%d\n", sum);
	return (0);
}
