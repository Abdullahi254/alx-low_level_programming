#include "main.h"
/**
 *reverse_array - used to reverse an array
 *@a: parameter
 *@n: size
 *Return: void
 */
void reverse_array(int *a, int n)
{
int c, i;
int temp;

i = n - 1;
for (c = 0; c < n / 2; c++)
{
temp = a[i];
a[i] = a[c];
a[c] = temp;
i--;
}
}
