#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - executes a function given as param
 * @array: pointer to first element of array
 * @size: array size
 * @action: pointer to function
 * Return: always void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || size <= 0 || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
