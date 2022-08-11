#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free a lsit list_t
 * @head: the begining of the list to free
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
