#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates args
 * @ac: number of argument param
 * @av: pointer to first element of a string array
 * Return: pointer to a string or NULL
 */
char *argstostr(int ac, char **av)
{
	char *p;
	int i, j, n;

	if (ac == 0 || av == NULL)
		return (NULL);
	j = 0;
	n = 0;
	for (i = 0; i < ac; i++)
	{
		while (av[i][j] != '\0')
		{
			j++;
			n++;
		}
		j = 0;
	}
	p = malloc(n + i);
	if (p == NULL)
		return (NULL);
	j = 0;
	n = 0;
	for (i = 0; i < ac; i++)
	{
		while (av[i][j] != '\0')
		{
			p[n] = av[i][j];
			j++;
			n++;
		}
		p[n] = '\n';
		n++;
		j = 0;
	}
	return (p);
}
