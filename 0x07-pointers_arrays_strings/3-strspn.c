#include "main.h"
#include <stdio.h>
/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer param of string of initial segment
 * @accept: pointer to string of values acccepted
 * Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	const char *p, *q;

	i = 0;
	for (p = s; *p != '\0'; p++)
	{
		for (q = accept; *q != '\0'; q++)
		{
			if (*p == *q)
			{
				i = i + 1;
				break;
			}
		}
		if (*q == '\0')
		{
			return (i);
		}
	}
	return (i);
}
