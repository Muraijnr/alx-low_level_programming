#include "stdio.h"
#include "lists.h"
#include "stdarg.h"
/**
 * free_list - frees lists
 * @head: pointer to node
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
