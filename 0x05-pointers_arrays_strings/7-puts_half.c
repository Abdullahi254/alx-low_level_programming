#include "main.h"
/**
 * puts_half - prints second half of the string
 * @str: input param
 * Return: void
 */
void puts_half(char *str)
{
	int i, j;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 != 0)
	{
		j = i - 1 / 2;
	}
	else
	{
		j = i / 2;
	}
	for (; j < i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
