#include "main.h"
/**
 * _abs - calculates the absolute value of an integer
 * @n: input value
 * Return: absolute value of input
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
