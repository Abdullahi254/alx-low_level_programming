#include "lists.h"
/**
 * dlistint_len - produces number of  elements in dlistint_t
 * @h: head of dlistint_t node
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
