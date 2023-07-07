#include "main.h"
#include "stdio.h"
/**
 * main - prints its name on the terminal
 * @argc: counts arguments input/available
 * @argv: string pointer for argument
 * Return:0
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
