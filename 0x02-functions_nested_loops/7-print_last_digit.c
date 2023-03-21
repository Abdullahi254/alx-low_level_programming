#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @i: input variable
 * Return: last digit of input
 */
int print_last_digit(int i)
{
	int lastDigit;

	lastDigit = i % 10;
	return (lastDigit);
}
