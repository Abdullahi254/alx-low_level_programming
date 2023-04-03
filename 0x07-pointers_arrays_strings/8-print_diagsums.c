#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints diagonal sum of a matrix
 * @a: pointer to the matrix
 * @size: size of matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int rSum, lSum;

	rSum = 0;
	lSum = 0;
	for (i = 0; i < size; i++)
	{
		rSum = rSum + a[i * size + i];
		lSum = lSum + a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", rSum, lSum);

}
