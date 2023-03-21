#include "main.h"
/**
 * print_alphabet - Prints alphabets in lowercase 10 times
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet_x10(void)
{
	char letter;
	int i;

	letter = 'a';
	for (i = 0; i < 10; i++)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
	}
	_putchar('\n');
}
