#ifndef LISTS_H
#define LISTS_H
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * struct my_double_linked - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 */
typedef struct my_double_linked
{
	int n;
	struct my_double_linked *prev;
	struct my_double_linked *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);
#endif
