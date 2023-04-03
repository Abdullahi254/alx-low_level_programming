#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a char in a string
 * @s: pointer param to the string that is to be traversed
 * @c: character to be looked for
 * Return: pointer to the first occurence of the character c or null
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
