#include "main.h"
/**
 * print_line - prints 'n' number of straight lines
 * @n: input param
 * Return: void
 */

void print_line(int n)
{
	int i;

	if (n > 1)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
