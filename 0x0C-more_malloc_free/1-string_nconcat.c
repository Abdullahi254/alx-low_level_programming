#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: number of characters of string two
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatenated_str;
	unsigned int i, j;
	unsigned int s1_len = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	s1_len = 0;
	while (s1[s1_len] != '\0')
	{
		s1_len++;
	}

	concatenated_str = malloc(sizeof(char) * (s1_len + n + 1));
	if (concatenated_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < s1_len; i++)
	{
		concatenated_str[i] = s1[i];
	}

	for (j = 0; j < n && s2[j] != '\0'; j++, i++)
	{
		concatenated_str[i] = s2[j];
	}

	concatenated_str[i] = '\0';
	return (concatenated_str);
}
