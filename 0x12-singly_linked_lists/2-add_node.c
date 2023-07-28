#include "lists.h"
#include "stdio.h"
#include "string.h"
/**
 * add_node - adds a new node at the beginning of a list of nodes
 * @head: pointer to the first node
 * @str: string to be duplicated
 * Return: address to the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *copy1;
	unsigned int len = 0;

	while (str[len])
		len++;
	copy1 = malloc(sizeof(list_t));
	if (!copy1)
		return (NULL);
	copy1->str = stdup(str);
	copy1->len = len;
	copy1->next = (*head);
	(*head) = copy1;

	return (*head);

}
