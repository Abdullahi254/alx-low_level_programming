#include "main.h"
/**
 * print_sign - prints +,0,- if input is greater than zero,
 * zero or less than zero respectively.
 * @n: integer input.
 * Return: 1 if input is greater than zero,
 * 0 if input is zero, - if input is less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else
	{
		putchar('-');
		return (-1);
	}
}
