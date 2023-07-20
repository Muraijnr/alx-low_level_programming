#include "stdio.h"
#include "stdarg.h"
#include "variadic_functions.h"
/**
 * sum_them_all - returns sum of its parameters
 * @n: number of arguments passed
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int result = 0;
	va_list args;
	unsigned int a;

	va_start(args, n);
	for (a = 0; a < n; a++)
	{
		result += va_arg(args, int);
	}
	va_end(args);
	return (result);
}
