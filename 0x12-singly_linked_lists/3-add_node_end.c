#include "lists.h"
#include "stdio.h"
#include "stdlib.h"
/**
 * add_node_end - adds a new node at the end
 * @head: pointer to the list
 * @str: to copy
 * Return: new node or NULL
 */
list_t *add_node_end(list_t, **head, const char *str);
{
	list_t *copy2;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;
	copy2 = malloc(sizeof(list_t));

	if (!copy2)
		return (NULL);
	copy2->str = strdup(str);
	copy2->len = len;
	copy2->next = NULL;

	if (*head == NULL)
	{
		*head = copy2;
		return (copy2);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = copy2;
	
	return (copy2);
}
