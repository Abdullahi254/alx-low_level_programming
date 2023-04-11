#include "main.h"
#include <stdlib.h>
/**
 * str_concat - contcats two string
 * @s1: string parma 1
 * @s2: string param 2
 * Return: pointer or null
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, i, j;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}
	len2 = 0;
	while (s2[len2] != '\0')
	{
		len2++;
	}
	result = malloc(len1 + len2 + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < len1)
	{
		result[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < len2)
	{
		result[i + j] = s2[j];
		j++;
	}
	result[i + j] = '\0';
	return (result);
}
