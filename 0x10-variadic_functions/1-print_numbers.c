#include <stdarg>

/**
 * print_numbers - prints integers
 * @separator: to be printed in between numbers
 * @n: number of arguments
 * Return: NULL
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	char *sep;
	unsigned int a;
	va_list args;

	if (separator == NULL || *separator == 0)
		sep = "";
	else
		sep = (char *) separator;
	va_start(args, n);

	if (n > 0)
		printf("%d", va_arg(args, int));
	for (a = 0; a < n; a++)
		printf("%s%d", sep, va_arg(args, int));
	printf("\n");
	va_end(args);
}
