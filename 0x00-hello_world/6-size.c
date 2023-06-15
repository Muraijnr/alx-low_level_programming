#include <stdio.h>
/**
 * main - Printing sizes of data types using printf
 * Return: 0
 */
int main(void)
{
	printf("Size of char: %zu bite(s)\n" sizeof(char));
	printf("Size of an int: %zu bite(s)\n" sizeof(int));
	printf("Size of a long int: %zu bite(s)\n" sizeof(long int));
	printf("Size of a long long int: %zu bite(s)\n" sizeof(long long int));
	printf("Size of a float: %zu bite(s)\n" sizeof(float));
	return (0);
}
