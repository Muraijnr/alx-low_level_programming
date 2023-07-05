#include "main.h"
#include "stdio.h"
/**
 * _pow_recursion - gives the power of a number raised to another
 * @x: the number
 * @y: power
 * Return: power of x raised to y
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
}
