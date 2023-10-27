#include <stdio.h>
#include <stdlib.h>
#include <main.h>

/**
 * main - prints minimum amount of coins for change
 * @argc: argument counter
 * @argv: arguments
 * Return: 0 on success and 1 on failure
 */
int main(int argc, char **argv)
{
	int coins = 0;
	int cents;

	if  (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	while (cents >= 25)
	{
		coins++;
		cents -= 25;
	}
	while (cents >= 10)
	{
		coins++;
		cents -= 10;
	}
	if (cents >= 5)
	{
		coins++;
		cents -= 5;
	}
	if (cents >= 2)
	{
		coins++;
		cents -= 2;
	}
	if (cents == 1)
		coins++;
	printf("%d\n", coins);
	return (0);
}
