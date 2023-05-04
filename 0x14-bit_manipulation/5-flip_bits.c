#include "main.h"
/**
 * flip_bits - return number of bits needed to be fliped
 * @n: decimal value of first number to be manipulated
 * @m: decimal value of second number to be manipulated
 * Return: number of bits needed to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count;
	unsigned long int xor;

	xor = n ^ m;
	count = 0;
	while (xor != 0)
	{
		count = count + (xor & 1);
		xor >>= 1;
	}
	return (count);
}
