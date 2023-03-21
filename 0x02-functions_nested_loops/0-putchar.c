#include "main.h"
#include <stdio.h>
/**
 *main - Entry Point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int c;
	char p[] = "_putchar";

	for (c = 0; c < 9; c++)
	{
		putchar(p[c]);
	}
	putchar('\n');

	return (0);
}
