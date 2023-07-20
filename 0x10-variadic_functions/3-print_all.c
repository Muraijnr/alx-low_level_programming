#include "stdio.h"
#include "variadic_functions.h"
#include "stdlib.h"
#include "stdarg.h"
/**
 * print_c - prints a character
 * @args: arguments to print from
 * Return: void
 */
void print_c(va_list args)
{
	printf("%c", (char) va_arg(args, int));
}
/**
 * print_int - prints integers
 * @args: arguments to print from
 * Return: void
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}
/**
 * print_f - prints a float
 * @args: arguments to print from
 * Return: void
 */
void print_f(va_list args)
{
	printf("%f", (float) va_arg(args, int));
}
/**
 * print_s - prints a string
 * @args: arguments to print from
 * Return: void
 */
void print_s(va_list args)
{
	char *sp = va_arg(args, char*);

	while (sp != NULL)
	{
		printf("%s", sp);
		return;
	}
	printf("(nil)");
}
/**
 * print_all - prints various types depending on format
 * @format: gives type of information for args
 * Return: void
 */
void print_all(const char * const format, ...)
{
	const char *ptr;
	va_list args;

	functionkey key[4] = {{print_c, 'c'}, {print_int, 'i'},
				{print_f, 'f'}, {print_s, 's'}};
	int keyindex = 0, notfirst = 0;

	ptr = format;
	va_start(args, format);
	while (format != NULL && *ptr)
	{
		if (key[keyindex].spec == *ptr)
		{
			if (notfirst)
				printf(", ");
			notfirst = 1;
			key[keyindex].f(args);
			ptr++;
			keyindex = -1;
		}
		keyindex++;
		ptr += keyindex / 4;
		keyindex %= 4;
	}
	printf("\n");
	va_end(args);
}
