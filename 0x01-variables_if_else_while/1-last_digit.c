#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints out remainder
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last_digit_of = n % 10;

	if (last_digit_of > 5)
	{
		printf("Last digit of %d is %d and greater than 5\n", n, last_digit_of);
	}
	else if (last_digit_of == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_digit_of);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
				n, last_digit_of);
	}
	return (0);
}
