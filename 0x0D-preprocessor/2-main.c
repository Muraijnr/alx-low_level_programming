#include "stdio.h"
/**
 * main - prints file name it was compiled from
 * Return: 0
 */
int main(void)
{
	printf("%s\n", _FILE_);
	return (0);
}