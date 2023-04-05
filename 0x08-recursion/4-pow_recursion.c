#include "main.h"
/**
 * _pow_recursion - function that returns value of x power y
 * @x: input param
 * @y: second input param(power)
 * Return: always int;
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
