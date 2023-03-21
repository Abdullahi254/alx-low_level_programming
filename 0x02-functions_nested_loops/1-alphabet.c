#include "main.h"
/**
 *print_alphabet - Prints alphabets in lowercase
 *
 *Return: Always 0 (Success)
 */
int print_alphabet(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');

	return (0);
}
