#include "search_algos.h"
/**
 * linear_search - performs linear search
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of value
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		if (*array == value)
		{
			return (i);
		}
		array += 1;
	}
	return (-1);
}
