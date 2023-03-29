#include "main.h"
/**
 ** _strncat - concatenates two string
 * @dest: input param to be appended to
 * @src: input param to append to
 * @n: bytes to be used from src
 * Return: pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[j + i] = src[i];
	}
	dest[j + i] = '\0';
	return (dest);
}
