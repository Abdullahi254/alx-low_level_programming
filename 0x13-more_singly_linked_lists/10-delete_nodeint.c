#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes node at given position
 * @head: pointer to head node of listint_t
 * @index: index to where data is inserted
 * Return: address of new node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *previous;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
		return (1);
	}
	previous = NULL;
	current = *head;
	for (i = 0; i < index && current != NULL; i++)
	{
		previous = current;
		current = current->next;
	}
	if (current == NULL)
		return (-1);
	previous->next = current->next;
	free(current);
	return (1);
}
