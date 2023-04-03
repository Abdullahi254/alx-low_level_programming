#include "main.h"
/**
 * _memset - fills memory with constant byte
 * @s: pointer param to where filling starts
 * @b: char param that is to fill memory
 * @n: param to inddicate number of memory to fill
 * Return: pointer to memory address
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
