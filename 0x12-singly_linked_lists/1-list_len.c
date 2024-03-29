#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list list_t
 * @h: linked list to ch
 * Return: number of elements in @h
 */

size_t list_len(const list_t *h)
{
	int counter = 0;

	while (h)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
