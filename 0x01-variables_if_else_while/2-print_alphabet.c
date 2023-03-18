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
	char lowerAlphabets[26];
	int i;

	lowerAlphabets[26] = "abcdefghijklmnopqrstuvwxyz";
	for (i = 0; i < 26; i++)
		putchar(lowerAlphabets[i]);
	return (0);
}
