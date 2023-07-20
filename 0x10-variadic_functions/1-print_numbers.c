#include "stdio.h"
#include "variadic_functions.h"
#include "stdarg.h"
#include "stdlib.h"
/**
 * print_numbers - prints numbers in arguments given
 * @separator: string printed in between numbers
 * @n: number of numbers to be printed
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list args;

	va_start(args, n);
	for (a = 0; a < n; a++)
	{
		if (separator != NULL)
		{
			printf("%d%s", va_arg(args, int), separator);
		}
		else
			printf(" %d", va_arg(args, int));
	}
	printf("\n");
	va_end(args);
}
