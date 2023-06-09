#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints binary
 * @n: int to be converted to binary
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
	{
		if (n >> 1)
			print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
}
