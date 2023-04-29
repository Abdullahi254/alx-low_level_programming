#include "lists.h"
#include <stdio.h>
/**
 * listint_len - prints the number if elements in a list
 * @h: pointer to the head of the list
 * Return: number of nodes in list
 */
size_t listint_len(const listint_t *h)
{
	size_t i;
	const listint_t *temp;

	i = 0;
	temp = h;
	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}
