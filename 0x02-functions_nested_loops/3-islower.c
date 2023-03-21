#include "main.h"
/**
 * _islower - Checks for a lower case character.
 * Return: always 1 if char is lower or 0 if character is not.
 */
int _islower(char c)
{	char letter = 'a';

	while (letter <= 'z')
	{
		if (c == letter)
		{
			return (1);
		}
		letter++;
	}
	return (0);
}
