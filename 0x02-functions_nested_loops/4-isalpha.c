#include "main.h"

/**
 *  _isalpha - Checks for a lower case and uppercase characters.
 * @c: input value
 * Return: always 1 if char is lower or 0 if character is not.
 */
int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
		return (1);
	else
		return (0);
}
