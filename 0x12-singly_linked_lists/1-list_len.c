#include "lists.h"
#include <stdio.h>
/**
 * list_len - gets number of elements in a linked list_t list
 * @h: pointer to the head of the list_t list
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
