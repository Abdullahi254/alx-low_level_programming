#include "search_algos.h"
/**
 * binary_search - performs binary search
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of value
 */
int binary_search(int *array, size_t size, int value)
{
	size_t start, middle, end;

	if (array == NULL)
	{
		return (-1);
	}
	start = 0;
	end = size - 1;
	middle = (end - start) / 2;
	while ((array[middle] != value) && (start <= end))
	{
		if (array[middle] < value)
		{
			start = middle + 1;
		}
		else
		{
			end = middle - 1;
		}
		middle = (end - start) / 2;
	}
	if (array[middle] == value)
	{
		return (middle);
	}
	return (-1);
}
