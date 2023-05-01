#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - sums all the data in a listint_t
 * @head: pointer to head of a listint_t
 * Return: sum of data
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
