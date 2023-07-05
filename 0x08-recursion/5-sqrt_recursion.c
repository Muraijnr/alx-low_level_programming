#include "main.h"
#include "stdio.h"

int _sqrt(int n, int a);
/**
 * _sqrt_recursion - gets square root of natural number
 * @n: the number
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - square o anatural number
 * @n: number to be calculated
 * @a: number for comparison
 * Return: square root
 */
int _sqrt(int n, int a)
{
	int sqrt = a * a;

	if (sqrt > n)
	{
		return (-1);
	}
	if (sqrt == n)
	{
		return (a);
	}
	return (_sqrt(n, a + 1));
}
