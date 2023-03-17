#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowerAlphabets[];

	lowerAlphabets = "abcdefghijklmnopqrstuvwxyz";
	for (int i = 0; i < 26; i++)
		putchar("%c", lowerAlphabets[i]);
	return (0);
}
