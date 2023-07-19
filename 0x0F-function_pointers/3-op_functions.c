#include "3-calc.h"
#include "stdio.h"
#include "math.h"
/**
 * op_add - adds two integers
 * @a: first integer
 * @b: second integer
 * Return: sum(ab);
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - gets difference of a and b
 * @a: first integer
 * @b: second integer
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - gives multiplication of two numbers
 * @a: first number
 * @b: 2nd number
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - result of dividing a by b
 * @a: first integer
 * @b: 2nd integer
 * Return: integer
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - returns remainder of a divided by b
 * @a: first integer
 * @b: 2nd integer
 * Return: modulus
 */
int op_mod(int a, int b)
{
	return (a % b);
}
