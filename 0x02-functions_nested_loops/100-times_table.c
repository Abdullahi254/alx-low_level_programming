#include "main.h"
/**
 * print_times_table - prints n times table
 * @n: input variable
 * Return: void
*/
void print_times_table(int n)
{
	int i;
	int j;
	int k;

	if (n > 15 || n < 0)

	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < 10; j++)
			{
				k = (i * j);
				if (k > 9)
				{
					_putchar(k / 10 + '0');
					_putchar(k % 10 + '0');
				}
				else if (j != 0)
				{
					_putchar(' ');
					_putchar(k + '0');
				}
				else
				{
					_putchar(k + '0');
				}
				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
