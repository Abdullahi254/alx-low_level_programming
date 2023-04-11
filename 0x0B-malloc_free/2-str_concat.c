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
	int i, j, k, l;
	char *new_str;

	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		j++;
	}
	new_str = malloc(i + j + 1);
	if (new_str == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
	{
		new_str[k] = s1[k];
	}
	i = 0;
	for (l = k; l <= (k + j); l++)
	{
		new_str[l] = s2[i];
		i++;
	}
	return (new_str);
}
