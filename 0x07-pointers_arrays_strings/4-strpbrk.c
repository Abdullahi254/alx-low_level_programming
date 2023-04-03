#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer param to string to be searched from
 * @accept: pointer param to string that is to be searched
 * Return: pointer to string
 */
char *_strpbrk(char *s, char *accept)
{
	char *p, *q;

	for (p = s; *p != '\0'; p++)
	{
		for (q = accept; *q != '\0'; q++)
		{
			if (*p == *q)
				return (p);
		}
	}
	return (NULL);
}
