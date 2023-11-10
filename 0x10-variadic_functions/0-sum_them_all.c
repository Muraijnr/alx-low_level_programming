#include <stdarg.h>

/**
 * sum_them_all - sums arguments passed
 * @n: number of arguments
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int a;
	int sum;
	va_list args;

	va_start(args, n);
	for (a = 0, sum = 0; a < n; a++)
		sum += va_arg(args, int);

	va_end(args);
	return (sum);
}
