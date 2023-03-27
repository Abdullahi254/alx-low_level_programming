#include "main.h"
/**
 * puts2 - prints every other character
 * @str: input param
 * Return: void
 */
void puts2(char *str)
{
	int i, j;
	
	i = 0;
	j = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}

	for (j = 0; j < i; j = j + 2)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
