#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strlen - returns the lenght of a string
 * @s: string whose length to return
 * Return: length of the string
 */

int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
/**
 * add_node_end- adds a new node at the end of a list list_t
 * @head: head of the list
 * @str: strig to add to list
 * Return: Address of new element, or NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp;
	int length = _strlen(str);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = length;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (new);
}
