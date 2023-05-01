#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - returns nth node of a listint_t list
 * @head: pointer to head node
 * @index: index of node to be returned
 * Return: pointer to node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *node;

	if (head == NULL)
		return (NULL);
	i = 0;
	while (head->next != NULL)
	{
		if (index == i)
		{
			node = head;
			return (node);
		}
		head = head->next;
		i++;
	}
	return (NULL);
}
