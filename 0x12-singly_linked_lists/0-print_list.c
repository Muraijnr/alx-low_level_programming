#include "stdio.h"
#include "lists.h"
/**
 * print_list -prints elements of a list
 * @h: pointer to a node containing the elements
 * Return: 0 or nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t a = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		a++;
		h = h->next;
	}
	return (a);
}
