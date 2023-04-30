#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees a listint list
 * @head: pointer to head of listint
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
