#include "3-calc.h"
#include "stdlib.h"
#include "stdio.h"
/**
 * main - prints outcome of simple operations
 * @argc: number of arguments given
 * @argv: array of pointers to arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*a)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	a = get_op_func(argv[2]);

	if (a == NULL || argv[2][1] != 0)
	{
		printf("Error\n");
		exit(98);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(98);
	}

	printf("%d\n", a(num1, num2));

	return (0);
}
