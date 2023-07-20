#ifndef VA_FUNCTIONS_H
#define VA_FUNCTIONS_H
#include "stdarg.h"
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct functionkey - a key for picking function to use
 * @f: function for use
 * @spec: character specifier
 */
typedef struct functionkey
{
	void(*f)(va_list);
	char spec;
} functionkey;

#endif
