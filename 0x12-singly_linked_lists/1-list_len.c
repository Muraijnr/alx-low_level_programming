#include "lists.h"
#include "stdio.h"
#include "stdlib.h"
/**
 * list_len - returns number of elements in a list
 * @h: pointer to the singly node
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		a++;
		h = (h).(next);
	}
	return (a);
}
