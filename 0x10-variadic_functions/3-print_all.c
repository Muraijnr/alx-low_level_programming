#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * printf_char - prints char from a list of arguments
 * @list: va_list to print from
 * Return: NULL
 */
void printf_char(va_list list)
{
	printf("%c", (char) va_arg(list, int));
}

/**
 * printf_int - prints an int from arguments passed
 * @list: va_list to print from
 * Return: void
 */
void printf_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * printf_float - prints a float from a list of arguments passed
 * @list: arguments to print from
 * Return: NULL
 */
void printf_float(va_list list)
{
	printf("%f", (float) va_arg(list, double));
}

/**
 * printf_string - prints a string from a list of arguments
 * @list: list to print from
 * Return: NULL
 */
void printf_string(va_list list)
{
	char *str = va_arg(list, char*);

	while (str != NULL)
	{
		printf("%s", str);
		return;
	}
	printf("(nil)");
}

/**
 * print_all - prints various types of formats
 * @format: contains type of infor for args
 * Return: NULL
 */
void print_all(const char * const format, ...)
{
	const char *ptr;
	va_list list;
	funcholder key[4] = { {printf_char, 'c'}, {printf_int, 'i'},
				{printf_float, 'f'}, {printf_string, 's'}};
	int keyindex = 0, notfirst = 0;

	ptr = format;
	va_start(list, format);
	while (format != NULL && *ptr)
	{
		if (key[keyindex].spec == *ptr)
		{
			if (notfirst)
				printf(", ");
			notfirst = 1;
			key[keyindex].f(list);
			ptr++;
			keyindex = 1;
		}
		keyindex++;
		ptr += keyindex / 4;
		keyindex %= 4;
	}
	printf("\n");

	va_end(list);
}
