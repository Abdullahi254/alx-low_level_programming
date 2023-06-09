#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees a listint list and sets the head to NULL
 * @head: pointer to head of listint
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *next;

	temp = *head;
	while (temp != NULL)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
	*head = NULL;
}
