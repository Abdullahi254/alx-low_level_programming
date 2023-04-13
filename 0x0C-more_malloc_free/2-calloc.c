#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmeb: number of elements
 * @size: bytes of each element
 * Return: pointer or null
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	return (p);
}
