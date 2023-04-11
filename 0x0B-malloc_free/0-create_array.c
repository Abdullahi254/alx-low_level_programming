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

	if (size == 0)
		return (NULL);
	ar = malloc(size * sizeof(char));
	while (size > 0)
	{
		ar[size] = c;
		size --;
	}
	ar[0] = c;
	return (ar);
}
