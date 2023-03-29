#include "main.h"
/**
 ** _strncpy - copies a string
 * @dest: input param to be appended to
 * @src: input param to append to
 * @n: bytes to be used from src
 * Return: pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < n && j < i; j++)
	{
		dest[j] = src[j];
	}
	if (n >= i)
		dest[i] = '\0';
	return (dest);
}

