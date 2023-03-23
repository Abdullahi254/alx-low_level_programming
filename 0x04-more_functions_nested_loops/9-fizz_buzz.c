#include <stdio.h>
/**
 * main - code entry
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			if (i % 3 == 0)
			{
				putchar('F');
				putchar('i');
				putchar('z');
				putchar('z');
			}
			if (i % 5 == 0)
			{
				putchar('B');
				putchar('u');
				putchar('z');
				putchar('z');
			}
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
