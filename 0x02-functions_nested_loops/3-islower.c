#include "main.h"
/**
 * _islower - Checks for a lower case character.
 * @c: input value
 * Return: always 1 if char is lower or 0 if character is not.
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
