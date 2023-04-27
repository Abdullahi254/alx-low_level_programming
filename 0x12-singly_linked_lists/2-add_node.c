#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - adds new node to the beginning
 * @head: a pointer to a pointer to the head of list_t list
 * @str: string to be added to new node
 * Return: address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
