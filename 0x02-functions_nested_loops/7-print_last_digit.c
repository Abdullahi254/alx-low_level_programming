#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @i: input variabe
 * Return: last digit of input
 */
int print_last_digit(int i)
{
	int lastDigit;

	if (i < 0)
	{
		lastDigit = -1 * (i % 10);
		_putchar(lastDigit + '0');
		return (lastDigit);
	}
	else
	{
		lastDigit = i % 10;
		_putchar(lastDigit + '0');
		return (lastDigit);
	}
}
