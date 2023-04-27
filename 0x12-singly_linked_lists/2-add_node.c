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
	list_t *newNode;

	if (str == NULL)
		return (NULL);
	newNode = malloc(sizeof(list_t));
	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->len = strlen(str);
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
