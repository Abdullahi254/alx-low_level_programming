#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char num;
	int i;

	num = '0';
	for (i = 0; i < 10; i++)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
