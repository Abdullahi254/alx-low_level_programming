#include "main.h"
/**
 * _isdigit - checks for a digit 0 through 9
 * @c:  input to be checked
 * Return: 1 if c is in 0-9 or 0 if c is not
 */
int __isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	return (0);
}
