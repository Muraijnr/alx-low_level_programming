#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func - returns pointer for the approriate func
 * @s: string containing operation symbol
 * Return: pointer to function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t key[] = {{"+", op_add}, {"-", op_sub}, {"*", op_mul},
		{"/", op_div}, {"%", op_mod} }
	int a;

	while (a < 5)
	{
		if (*key[a].op == *s)
			return (key[a].f);
		a++;
	}
	return (NULL);
}
