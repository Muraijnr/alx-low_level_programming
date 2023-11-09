#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: name to print
 * @f: function to use
 * Return: NULL
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != 0 && name != 0)
		(*f)(name);
}
