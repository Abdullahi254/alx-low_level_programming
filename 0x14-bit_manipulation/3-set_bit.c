#include "main.h"
/**
 * set_bit - sets value of a bit to 1
 * @n: decimal value of number
 * @index: index to place bit
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num;

	if (index > (sizeof(unsigned long) * 8))
		return (-1);
	num = 1 << index;
	*n = *n | num;
	return (1);
}
