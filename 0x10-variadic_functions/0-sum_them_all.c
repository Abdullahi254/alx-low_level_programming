#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sums all params
 * @n: counter param
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, x, s;

	x = 0;
	s = 0;
	va_start(args, n);
	if (n == 0)
		return (0);
	for (i = 0 ; i < n; i++)
	{
		x = va_arg(args, int);
		s = s + x;
	}
	va_end(args);
	return (s);
}
