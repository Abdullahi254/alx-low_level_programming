#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints al elements in list
 * @h: pointer to the head of the list
 * Return: number of nodes in list
 */
size_t print_listint(const listint_t *h)
{
	size_t i;
	const listint_t *temp;

	i = 0;
	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		i++;
		temp = temp->next;
	}
	return (i);
}
