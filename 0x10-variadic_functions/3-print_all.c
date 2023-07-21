#include "stdio.h"
#include "stdlib.h"
#include "variadic_functions.h"
#include "stdarg.h"
/**
 * print_all - prints all arguments depending on the format given
 * @format: specifier
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int a = 0;
	char *sp, *sep = "";
	va_list args;

	va_start(args, format);

	if (format)
	{
		while (format[a])
		{
			switch (format[a])
			{
				case 'c':
					printf("%s%c", sep, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(args, double));
					break;
				case 's':
					sp = va_arg(args, char *);

					if (!sp)
						sp = "(nil)";
					printf("%s%s", sep, sp);
					break;
				default:
					a++;
					continue;
			}
			sep = ", ";
			a++;
		}
	}
	printf("\n");
	va_end(args);
}
