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
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	if (lastDigit > 0)
	{
		printf("Last digit of %d is %d\n", n, lastDigit);
	} else if (n == 0)
	{
		printf("Last digit of %d is %d\n", n, lastDigit);
	} else
	{
		printf("Last digit of %d is %d\n", n, lastDigit);
	}
	return (0);
}
