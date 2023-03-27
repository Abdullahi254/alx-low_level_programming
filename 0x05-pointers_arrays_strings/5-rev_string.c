#include "main.h"
#include <stdio.h>
/**
 * rev_string - prints a string in reverse
 * @s: pointer param to string
 * Return: void
 */
void rev_string(char *s)
{
	int i, j;
	char temp;

	i = 0;
	j = 0;
	while ((*(s + i)) != '\0')
	{
		i++;
	}
	while (j <= i)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		j++;
		i--;
	}
}
