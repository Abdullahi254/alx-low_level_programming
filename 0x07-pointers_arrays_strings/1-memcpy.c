#include "main.h"
/**
 * _memcpy - copies memory area from src to dest
 * @dest: pointer param to where memory area is copied to
 * @src: pointer param to where memory area is copied from
 * @n: param to inddicate number of memory to fill
 * Return: pointer to memory address
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
