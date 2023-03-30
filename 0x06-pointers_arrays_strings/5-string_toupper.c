#include "main.h"
/**
 *string_toupper - convert string to uppercase
 *@str: pointer to string param
 *Return: pointer
 */
char *string_toupper(char *str)
{
	char *str_ptr;

	str_ptr = str;
	while (*str_ptr != '\0')
	{
		if (*str_ptr > 96 && *str_ptr < 123)
		{
			*str_ptr = (*str_ptr - 32);
		}
		str_ptr++;
	}
	return (str);
}
