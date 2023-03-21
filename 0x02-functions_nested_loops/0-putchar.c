#include<stdio.h>
#include <string.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char myString[15];

	strcpy(myString, "_putchar");
	for (i = 0; i < 8; i++)
	{
		putchar(myString[i]);
	}
	putchar('\n');
	return (0);
}
