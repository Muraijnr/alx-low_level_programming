#include "function_pointers.h"
#include "stdio.h"
/**
 * print_name - prints name
 * @name: the  name to be printed
 * @f: pointer to a function thats being used
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != 0 && name != 0)
		(*f)(name);
}
