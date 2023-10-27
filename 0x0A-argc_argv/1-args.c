#include <stdio.h>

/**
 * main - prints number of arguments int the program
 * @argc: number of arguments
 * @argv: arguments
 * return: 0
 */

int main(int argc, char **argv)
{
	printf("%d\n", argc - 1);
	argv[0] = "";
	return (0);
}
