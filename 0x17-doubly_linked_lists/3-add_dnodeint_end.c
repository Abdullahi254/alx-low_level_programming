#include "lists.h"

/**
 *add_dnodeint_end - adds a new node to the begining of a list
 *@head: pointer to the first node
 *@n: integer to be copied
 *Return: NULL if fail or a null element else new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t)), *temp_node = *head;

	if (!head || !new_node)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (!*head)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (*head);
	}
	while (temp_node->next)
	{
		temp_node = temp_node->next;
	}
	temp_node->next = new_node;
	new_node->prev = temp_node;
	return (new_node);
}
