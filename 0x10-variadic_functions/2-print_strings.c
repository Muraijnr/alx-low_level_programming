#include <stdarg>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - prints a string of arguments with separator
 * @separator: to be printed in between strings
 * @n: number of arguments
 * Return: NULL
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *sep, *ptr;
	unsigned int a;
	va_list args;

	if (separator == NULL || *separator == 0)
		sep = "";
	else
		sep = (char *) separator;
	va_start(args, n);

	if (n > 0)
		printf("%s", va_arg(args, char *));
	for (a = 1; a < n; a++)
	{
		ptr = va_arg(args, char *);
		if (ptr == NULL)
			ptr = "(nil)";
		printf("%s%s", sep, ptr);
	}
	printf("\n");
	va_end(args);
}
