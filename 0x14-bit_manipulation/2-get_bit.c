#include "main.h"
#include <stdio.h>
/**
 * get_bit - gets value of bit from given index
 * @n: decimal value param
 * @index: index param to produce bit
 * Return: 1 0r 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long) * 8)
		return (-1);
	else
		return ((n >> index) & 1);
}

