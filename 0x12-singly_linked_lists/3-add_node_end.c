#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - adds new node to the end
 * @head: a pointer to a pointer to the head of list_t list
 * @str: string to be added to new node
 * Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *current;

	if (str == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
	}
	return (new_node);
}
