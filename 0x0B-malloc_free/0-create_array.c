#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array
 * @size: param for array size
 * @c: char param to initilize
 * Return: pointer or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *ar;

	ar = malloc(size);
	if (size == 0 || ar == 0)
		return (NULL);
	while (size--)
		ar[size] = c;
	return (ar);
}
