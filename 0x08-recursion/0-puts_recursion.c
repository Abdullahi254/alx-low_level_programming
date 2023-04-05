#include "main.h"
/**
 * _puts_recursion - usese recursion to print a string
 * @s: string pointer pram to be printed
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
