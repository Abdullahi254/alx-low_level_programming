#include "main.h"
#include <stdio.h>
/**
 *main - Entry Point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char myString[] = "_putchar";

	for (i = 0; i < 9; i++)
	{
		putchar(myString[i]);
	}
	putchar('\n');

	return (0);
}
