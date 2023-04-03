#include "main.h"
#include <stddef.h>
/**
 * _strstr - finds first occurrence of the substring
 * @haystack: string to be searched from this
 * @needle: substring being searched for
 * Return: pointer to begining of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *p, *q, *r;

	for (p = haystack; *p != '\0'; p++)
	{
		q = p;
		r = needle;
		while (*r != '\0' && *q == *r)
		{
			q++;
			r++;
		}
		if (*r == '\0')
			return (p);
	}
	return (NULL);
}
