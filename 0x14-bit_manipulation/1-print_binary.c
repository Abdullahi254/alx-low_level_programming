#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints binary
 * @n: int to be converted to binary
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned int i;
	unsigned long int mask;

	mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	for (i = 0; i < sizeof(unsigned long int) * 8; i++)
	{
		if (n & mask)
		{
			_putchar('1');
		}
		else
			_putchar('0');
		mask >>= 1;
	}
}
