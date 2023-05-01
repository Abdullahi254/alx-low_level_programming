#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - removes head node and return it's data
 * @head: pointer to pointer of head node
 * Return: head node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
		return (0);
	temp = *head;
	*head = (*head)->next;
	data = temp->n;
	free(temp);
	return (data);
}
