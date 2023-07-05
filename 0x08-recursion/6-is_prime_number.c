#include "main.h"
#include "stdio.h"
int if_prime(int n, int a);
/**
 * is_prime_number - says if a number is prime or not
 * @n: the number
 * Return: 1 if prime and 0 if otherwise
 */
int is_prime_number(int n)
{
	return (if_prime(n, 1));
}
/**
 * if_prime - checks if a number is prime or not
 * @n: the number
 * @a: number to be compared with
 * Return: if_prime
 */
int if_prime(int n, int a)
{
	if (n <= 1)
		return (0);
	else if (n % a == 0 && a > 1)
		return (0);
	else if ((n / a) < a)
		return (1);
	return (if_prime(n, a + 1));
}
