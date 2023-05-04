#include "main.h"
#include <stdio.h>
int _isdigit(int c);
/**
 * binary_to_uint - converts binary to int
 * @b: char param that is binary
 * Return: int value
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum;

	sum = 0;
	if (b == NULL)
		return (0);
	for (; *b != '\0'; ++b)
	{
		if (!_isdigit(*b) || (*b != '0' && *b != '1'))
			return (0);
		sum = sum << 1;
		sum = sum + (*b - '0');
	}
	return (sum);
}

/**
 * _isdigit - finds if is digit
 * @c: int param
 * Return: 1 0r 0
 */
int _isdigit(int c)
{
return (c >= '0' && c <= '9');
}
