#include <stdio.h>
/**
 * main- Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char p;

	for (p = '0'; p < '10'; p++)
		putchar(p);

	for (p = 'a'; p < 'g'; p++)
		putchar(p);

	putchar('\n');

	return (0);
}
