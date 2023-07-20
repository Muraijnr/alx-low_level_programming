#include "stdio.h"
#include "stdarg.h"
#include "stdlib.h"
#include "variadic_functions.h"
/**
 * print_strings - prints strings given
 * @separator: constatnt separator printed in between strings
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list args;
	char *sep, *p;

	va_start(args, n);
	for (a = 0; a < n; a++)
	{
		if (separator == NULL || *separator == 0 || a == 0)
			sep = "";
		else
			sep = (char *)separator;
		p = va_arg(args, char*);
		if (p == NULL)
			p = "(nil)";
		printf("%s%s", sep, p);
	}
	printf("\n");
	va_end(args);
}
