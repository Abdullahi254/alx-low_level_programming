#include "main.h"
#include <stdio.h>
/**
 * _atoi - convert a string to an integer
 * @s: string param to be converted to int
 * Return: int or 0
 */
int _atoi(char *s)
{
	int i, j, k, sign;
	int n;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	n = 0;
	k = 0;
	sign = 1;
	for (j = 0; j < i; j++)
	{
		if (s[j] == '-')
		{
			sign = sign * -1;	
		}
			
		if (s[j] == '+')
		{
			sign = sign * 1;	
		}
		if (s[j] >= '0' && s[j] <= '9')
		{
			k++;
			n = (n * 10) + (s[j] - '0');
			if (s[j+1] < '0' || s[j+1] > '9')
				break;
		}

	}
	if (k < 1)
		return (0);
	if (sign == -1)
	{
		return (n * sign);
	}
	else
		return (n);
}
