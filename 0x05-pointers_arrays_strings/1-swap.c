#include "main.h"
#include <stdio.h>
/**
 * swap_int - function that swaps value of two integers
 * @a: pointer param one
 * @b: pointer param two
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

}
