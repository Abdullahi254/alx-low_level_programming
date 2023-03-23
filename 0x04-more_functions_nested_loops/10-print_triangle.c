#include "main.h"
/**
 * print_triangle - prints triangle
 * @size: input param
 * Return: void
 */

void print_triangle(int size)
{
	int i, j, k;

	for (i = 1; i <= size; i++)
	{
		for (k = i; k < size; k++)
		{
			_putchar(' ');
		}
		for (j = 0; j < i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size < 1)
		_putchar('\n');
}
