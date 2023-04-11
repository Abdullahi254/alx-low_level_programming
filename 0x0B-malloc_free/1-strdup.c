#include "main.h"
#include <stdlib.h>
/**
 * _strdup - creates a pointer ot a newly allocated space in memory
 * @str: string param
 * Return: pointer or NULL
 */
char *_strdup(char *str)
{
	int len, i;
	char *new_str;

	if (str == NULL)
		return (NULL);
	len = 0;
	while (str[len] != '\0')
		len++;
	new_str = malloc(len + 1);
	if (new_str == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		new_str[i] = str[i];
	}
	return (new_str);
}
