#include "main.h"
/**
 * _strlen_recursion - gets length of string
 * @s: string pointer param
 * Return: always int
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));

}
