#include "function_pointers.h"
/**
 * print_name - prints name
 * @name: name param
 * @f: function pointer param
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	void (*funct_pointer)(char *);

	if (name == NULL || f == NULL)
		return;
	funct_pointer = f;
	(funct_pointer)(name);
}
