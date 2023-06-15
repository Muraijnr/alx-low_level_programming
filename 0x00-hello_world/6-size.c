#include <stdio.h>

int main(void)
{
	printf("Size of a char: %zu bites\n", sizeof(char));
	printf("Size of an int: %zu bites\n", sizeof(int));
	printf("Size of a long int: %zu bites\n", sizeof(long int));
	printf("Size of a long long int: %zu bites\n", sizeof(long long int));
	printf("Size of a float: %zu bites\n", sizeof(float));

	return (0);
}
