#include "stdio.h"
#include "main.h"
#include "stdlib.h"

int get_len(char *str);
char *create_arr(int size);
char *iterate_zeroes(char *str);
void find_prod(char *prod, char *mult, int digit, int zeroes);
void add_nums(char *last_prod, char *next_prod, char *next_len);

/**
 * get_len - gets the length of a string
 * @str: the string
 * Return: len
 */
int get_len(char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}
/**
 * create_arr - creates an array
 * @size: size for the array
 * Return: pointer to the array
 */
char *create_array(int size)
{
	char *array;
	int index;

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		exit(98);
	for (index = 0; index < (size -1); index++)
		array[index] = 
}
