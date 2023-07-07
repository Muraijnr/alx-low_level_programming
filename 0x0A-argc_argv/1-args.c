#include "main.h"
#include "stdio.h"
/**
 * main - gives a count of arguments
 * @argc: counts
 * @argv: string pointer
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
