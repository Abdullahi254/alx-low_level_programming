#include "main.h"
/**
 ** _strcat - concatenates two string
 * @dest: input param to be appended to
 * @src: input param to append to
 * Return: string
 */
char *_strcat(char *dest, char *src)
{
	char *result;

	result = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (result);
}
